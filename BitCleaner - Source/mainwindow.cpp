#include "MainWindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>
#include <QUrl>
#include <QMimeData>
#include <QDebug>
#include <QList>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){

    ui->setupUi(this);
    setAcceptDrops(true);
    setWindowFlags( Qt::FramelessWindowHint );
    ui->tabWidget->setCurrentIndex(ABOUT);
    ui->tabWidget->tabBar()->hide();
    ui->execute_button->setVisible(false);

    changeLanguage(POLISH);

    fM = new FileManager();
}

void MainWindow::on_add_clicked() {

    ui->changeTableWidget->setRowCount(ui->changeTableWidget->rowCount()+1);

}

void MainWindow::on_remove_clicked() {
    if (ui->changeTableWidget->rowCount() > 1)
        ui->changeTableWidget->setRowCount(ui->changeTableWidget->rowCount()-1);
}

void MainWindow::on_reset_clicked() {
    ui->changeTableWidget->setRowCount(1);
    ui->changeTableWidget->clearContents();

}

void MainWindow::unCheckMenuButtons() {
    ui->btn1->setChecked(false);
    ui->btn2->setChecked(false);
    ui->btn3->setChecked(false);
    ui->btn4->setChecked(false);
    ui->btn5->setChecked(false);
    ui->btn6->setChecked(false);
    ui->btn7->setChecked(false);
    ui->execute_button->setVisible(true);
}

void MainWindow::mousePressEvent(QMouseEvent* event) {

    if(event->button() == Qt::LeftButton) {

        mMoving = true;
        mLastMousePosition = event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent* event) {

    if( event->buttons().testFlag(Qt::LeftButton) && mMoving) {
        this->move(this->pos() + (event->pos() - mLastMousePosition));
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent* event) {

    if(event->button() == Qt::LeftButton) {
        mMoving = false;
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_closeButton_clicked() {
    close();
}

void MainWindow::on_btn1_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = ORGANIZE);
    unCheckMenuButtons();
    ui->btn1->setChecked(true);
}

void MainWindow::on_btn2_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = CLEAN);
    unCheckMenuButtons();
    ui->btn2->setChecked(true);
}

void MainWindow::on_btn3_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = SPACES);
    unCheckMenuButtons();
    ui->btn3->setChecked(true);
}

void MainWindow::on_btn4_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = CHANGE);
    unCheckMenuButtons();
    ui->btn4->setChecked(true);
}

void MainWindow::on_btn5_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = CONVERT);
    unCheckMenuButtons();
    ui->btn5->setChecked(true);
}

void MainWindow::on_btn6_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = SETTINGS);
    unCheckMenuButtons();
    ui->btn6->setChecked(true);
}

void MainWindow::on_btn7_clicked() {
    ui->tabWidget->setCurrentIndex(menuSection = ABOUT);
    unCheckMenuButtons();
    ui->btn7->setChecked(true);
    ui->execute_button->setVisible(false);
}

void MainWindow::on_minimizeButton_clicked() {
    setWindowState( Qt::WindowMinimized );
}

void MainWindow::on_execute_button_clicked() {

    if (!fM->fileList.empty() || menuSection == SETTINGS)

        switch(menuSection) {

        case ORGANIZE: {

            if (ui->standardCheckBox->isChecked()){
                fM->standardOrganize();
                on_cancel_button_clicked();
            }
            if (ui->noStandardCheckBox->isChecked()){
                fM->noStandardOrganize(ui->noStandardText->toPlainText());
                on_cancel_button_clicked();
            }
            if (ui->customCheckBox->isChecked()){
                if (ui->isFileName->isChecked())
                    fM->customOrganize(ui->custom1Text->toPlainText(), ui->custom2Text->toPlainText(), true);
                else
                    fM->customOrganize(ui->custom1Text->toPlainText(), ui->custom2Text->toPlainText(), false);

                on_cancel_button_clicked();
            }

            break;
        }

        case CLEAN: {
            if (ui->standardCleanRadioButton->isChecked()){
                fM->standardClean(ui->standardCleanCheck1->isChecked(),ui->standardCleanCheck2->isChecked(),ui->standardCleanCheck3->isChecked());
                on_cancel_button_clicked();
            }
            if (ui->customCleanRadioButton->isChecked()){
                fM->customClean(ui->customCleanChars->toPlainText());
                on_cancel_button_clicked();
            }
            break;
        }

        case SPACES: {
            if (ui->changeSpaces1Radio->isChecked()){
                fM->changeWhiteToHardSpaces();
                on_cancel_button_clicked();
            }
            if (ui->changeSpaces2Radio->isChecked()){
                fM->changeHardToWhiteSpaces();
                on_cancel_button_clicked();
            }
            if (ui->removeHardSpacesRadio->isChecked()) {
                fM->removeHardSpaces();
                on_cancel_button_clicked();
            }
            if (ui->removeStandardSpacesRadio->isChecked()) {
                fM->removeWhiteSpaces();
                on_cancel_button_clicked();
            }
            break;
        }

        case CHANGE: {

            fM->exchange(ui->changeTableWidget);
            on_cancel_button_clicked();

            break;
        }

        case CONVERT: {

            if (ui->capitalRadio->isChecked()) {
                fM->toUpperCases();
                on_cancel_button_clicked();
            }

            if (ui->noCapitalRadio->isChecked()) {
                fM->toLowerCases();
                on_cancel_button_clicked();
            }

            if (ui->firstCapitalRadio->isChecked()) {
                fM->firstCaseUpper();
                on_cancel_button_clicked();
            }

            if (ui->noFirstCapitalRadio->isChecked()) {
                fM->firstCaseLower();
                on_cancel_button_clicked();
            }

            if (ui->noWordsCapitalRadio->isChecked()) {
                fM->everyWordStartsLowerCase();
                on_cancel_button_clicked();
            }

            if (ui->wordsCapitalRadio->isChecked()) {
                fM->everyWordStartsUpperCase();
                on_cancel_button_clicked();
            }

            break;

        }

        case SETTINGS: {

            if (ui->onTop->isChecked()) {
                setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
                show();
            } else {
                setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnBottomHint);
                show();
            }

            if (ui->plLang->isChecked()) {
                changeLanguage(POLISH);
            }

            if (ui->enLang->isChecked()) {
                changeLanguage(ENGLISH);
            }

            break;
        }

        }
}

void MainWindow::on_cancel_button_clicked() {
    fM->fileList.clear();
    ui->fileListWidget->clear();
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
    }

}

void MainWindow::dropEvent(QDropEvent *event) {

    foreach(const QUrl &url, event->mimeData()->urls()) {
        if (!fM->fileList.contains(url.toLocalFile())){
            fM->fileList.append(url.toLocalFile());
            ui->fileListWidget->addItem(fM->getFileExt(url.toLocalFile()).toUpper()+ "\t" +fM->getFileNameWithoutExt(url.toLocalFile()));
        }
    }

}


void MainWindow::changeLanguage(int lang) {

    switch(lang) {

    case POLISH: {


        ui->btn1->setText("Organizacja");
        ui->btn2->setText("Czyszczenie");
        ui->btn3->setText("Spacje");
        ui->btn4->setText("Zamiana");
        ui->btn5->setText("Notacja");
        ui->btn6->setText("Ustawienia");
        ui->btn7->setText("O Programie");

        ui->cancel_button->setText("Reset");
        ui->execute_button->setText("Wykonaj");

        ui->reset->setText("Reset");
        ui->add->setText("Dodaj");
        ui->remove->setText("Skasuj");

        ui->capitalRadio->setText("Nazwa wielkimi literami");
        ui->changeSpaces1Radio->setText("Zamień miękkie spacje na twarde");
        ui->changeSpaces2Radio->setText("Zamień twarde spacje na miękkie");

        ui->changeTableWidget->setColumnCount(2);
        ui->changeTableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Zamień Z"));
        ui->changeTableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Zamień Na"));
        ui->changeTableWidget->setRowCount(1);

        ui->noStandardText->setPlaceholderText("Twój Tekst");
        ui->custom1Text->setPlaceholderText("Początkowy tekst");
        ui->custom2Text->setPlaceholderText("Końcowy tekst");
        ui->customCleanChars->setPlaceholderText("np: ć lub ą ");


        ui->customCheckBox->setText("Własna");
        ui->customCleanRadioButton->setText("Własne znaki");
        ui->enLang->setText("English");
        ui->firstCapitalRadio->setText("Nazwa rozpoczyna się wielką literą");
        ui->infoClean->setText("Podpowiedź\nNie musisz oddzielać znaków spacją!");
        ui->instrukcja->document()->setPlainText("Warto wiedzieć!\n\n"
                                                 "Program służy głównie do porządkowania nazw plików (Numerowania, Oczyszczania nazw), prócz tego oferuje wiele dodatkowych opcji.\n\n"
                                                 "Zanim rozpoczniesz pracę na właściwych plikach przetestuj wszystkie dostępne opcje na plikach testowych (np: pusty folder).\n\n"
                                                 "Aby rozpocząć przeciągnij i upuść pliki na okno programu - pliki zostaną dodane do listy.");
        ui->instrukcja_2->document()->setPlainText("Oto lista zamiany znaków. Wpisz w pierwszą (lewą) komórkę znak lub tekst, który chcesz zamienić.\n"
                                                   "W drugą (prawą) komórkę wpisz tekst lub znak na jaki chcesz zamienić.\n"
                                                   "Możesz zamienić dowolną ilość wyrażeń wystarczy, że dodasz kolejny wiersz do listy.");

        ui->label_2->setText("+  Nazwa pliku");
        ui->label_3->setText("+    Numer według kolejności    +");
        ui->label_4->setText("Numerowanie według listy\n"
                             "Liczba pojawi się przed nazwą pliku");

        ui->languageGroup->setTitle("Język programu");
        ui->noCapitalRadio->setText("Nazwa małymi literami");
        ui->noFirstCapitalRadio->setText("Nazwa rozpoczyna się małą literą");
        ui->noStandardCheckBox->setText("Niestandardowa");
        ui->noWordsCapitalRadio->setText("Każde słowo rozpoczyna się \nmałą literą");
        ui->wordsCapitalRadio->setText("Każde słowo rozpoczyna się \nwielką literą");
        ui->usingGroup->setTitle("Obsługa");
        ui->standardCleanRadioButton->setText("Standardowe");
        ui->standardCheckBox->setText("Niestandardowa");
        ui->removeStandardSpacesRadio->setText("Usuń miękkie spacje");
        ui->removeHardSpacesRadio->setText("Usuń twarde spacje");
        ui->plLang->setText("Polski");
        ui->onTop->setText("Okno programu zawsze nad innymi");
        ui->isFileName->setText("+  Nazwa pliku  ");


        break;
    }

    case ENGLISH: {

        ui->btn1->setText("Organization");
        ui->btn2->setText("Cleaning");
        ui->btn3->setText("Spaces");
        ui->btn4->setText("Replace");
        ui->btn5->setText("Notation");
        ui->btn6->setText("Settings");
        ui->btn7->setText("About");

        ui->cancel_button->setText("Reset");
        ui->execute_button->setText("Accept");

        ui->reset->setText("Reset");
        ui->add->setText("Add");
        ui->remove->setText("Delete");

        ui->capitalRadio->setText("Name in capital letters");
        ui->changeSpaces1Radio->setText("Change soft spaces to hard ones");
        ui->changeSpaces2Radio->setText("Change hard spaces to soft ones");

        ui->changeTableWidget->setColumnCount(2);
        ui->changeTableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Change from"));
        ui->changeTableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Change to"));
        ui->changeTableWidget->setRowCount(1);

        ui->noStandardText->setPlaceholderText("Your Text");
        ui->custom1Text->setPlaceholderText("Initial text");
        ui->custom2Text->setPlaceholderText("Final Text");
        ui->customCleanChars->setPlaceholderText("ex: u or s ");


        ui->customCheckBox->setText("Custom");
        ui->customCleanRadioButton->setText("Your characters");
        ui->enLang->setText("English");
        ui->firstCapitalRadio->setText("The name begins with \na uppercase letter");
        ui->infoClean->setText("Prompt!\nYou do not have to separate characters \nwith a space!");
        ui->instrukcja->document()->setPlainText("Good to know!\n\n"
                                                 "The program is mainly used to organize file names (Numbering, Name Cleansing), but also offers many additional options.\n\n"
                                                 "Before you start working on the right files, test all available options on the test files (eg empty folder).\n\n"
                                                 "To start please drag and drop files onto the program window - the files will be added to the list.");
        ui->instrukcja_2->document()->setPlainText("Here is the list of character substitutions. Enter the first (left) cell of the character or text you want to replace.\n"
                                                   "In the second (right) cell, enter the text or character you want to replace.\n"
                                                   "You can change any number of expressions just by adding another row to the list.");

        ui->label_2->setText("+  File name");
        ui->label_3->setText("+    Number by order    +");
        ui->label_4->setText("Numbering by list\n"
                             "The number will appear in front \nof the file name");

        ui->languageGroup->setTitle("Language");
        ui->noCapitalRadio->setText("Name in lowercase");
        ui->noFirstCapitalRadio->setText("The name begins with a \nlowercase letter");
        ui->noStandardCheckBox->setText("Custom");
        ui->noWordsCapitalRadio->setText("Each word begins \nwith a small letter");
        ui->wordsCapitalRadio->setText("Each word begins \nwith a capital letter");
        ui->usingGroup->setTitle("Using");
        ui->standardCleanRadioButton->setText("Standard");
        ui->standardCheckBox->setText("Custom");
        ui->removeStandardSpacesRadio->setText("Delete soft spaces");
        ui->removeHardSpacesRadio->setText("Delete hard spaces");
        ui->plLang->setText("Polski");
        ui->onTop->setText("Always on Top");
        ui->isFileName->setText("+  File name  ");


        break;
    }
    }
}

