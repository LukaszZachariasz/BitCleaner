/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn1;
    QFrame *headerFrame;
    QPushButton *minimizeButton;
    QLabel *title;
    QPushButton *closeButton;
    QLabel *label;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QFrame *middleFrame;
    QFrame *bottomFrame;
    QPushButton *execute_button;
    QPushButton *cancel_button;
    QFrame *rightFrame;
    QTabWidget *tabWidget;
    QWidget *organizacja;
    QRadioButton *standardCheckBox;
    QRadioButton *noStandardCheckBox;
    QRadioButton *customCheckBox;
    QTextEdit *noStandardText;
    QLabel *label_2;
    QTextEdit *custom1Text;
    QLabel *label_3;
    QTextEdit *custom2Text;
    QCheckBox *isFileName;
    QLabel *label_4;
    QWidget *czyszczenie;
    QCheckBox *standardCleanCheck1;
    QCheckBox *standardCleanCheck2;
    QCheckBox *standardCleanCheck3;
    QRadioButton *standardCleanRadioButton;
    QRadioButton *customCleanRadioButton;
    QTextEdit *customCleanChars;
    QLabel *infoClean;
    QWidget *spacje;
    QRadioButton *changeSpaces2Radio;
    QRadioButton *changeSpaces1Radio;
    QRadioButton *removeHardSpacesRadio;
    QRadioButton *removeStandardSpacesRadio;
    QWidget *zamiana;
    QTableWidget *changeTableWidget;
    QPushButton *add;
    QPushButton *reset;
    QPushButton *remove;
    QPlainTextEdit *instrukcja_2;
    QWidget *konwersja;
    QRadioButton *capitalRadio;
    QRadioButton *firstCapitalRadio;
    QRadioButton *wordsCapitalRadio;
    QRadioButton *noWordsCapitalRadio;
    QRadioButton *noCapitalRadio;
    QRadioButton *noFirstCapitalRadio;
    QWidget *ustawienia;
    QGroupBox *languageGroup;
    QRadioButton *plLang;
    QRadioButton *enLang;
    QGroupBox *usingGroup;
    QCheckBox *onTop;
    QWidget *oprogramie;
    QPlainTextEdit *instrukcja;
    QPushButton *btn7;
    QListWidget *fileListWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1000, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1000, 600));
        MainWindow->setMaximumSize(QSize(1000, 600));
        MainWindow->setSizeIncrement(QSize(1000, 600));
        MainWindow->setBaseSize(QSize(1000, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1000, 600));
        centralWidget->setMaximumSize(QSize(1000, 600));
        centralWidget->setBaseSize(QSize(1000, 600));
        btn1 = new QPushButton(centralWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(0, 40, 215, 70));
        QFont font;
        font.setFamily(QStringLiteral("Leelawadee UI Semilight"));
        font.setPointSize(12);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        btn1->setFont(font);
        btn1->setAutoFillBackground(false);
        btn1->setStyleSheet(QLatin1String("#btn1{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn1:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn1:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn1:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
""));
        btn1->setCheckable(true);
        btn1->setFlat(false);
        headerFrame = new QFrame(centralWidget);
        headerFrame->setObjectName(QStringLiteral("headerFrame"));
        headerFrame->setGeometry(QRect(0, 0, 1001, 41));
        headerFrame->setStyleSheet(QLatin1String("#headerFrame {\n"
"	background-color:#336699;\n"
"\n"
"}"));
        headerFrame->setFrameShape(QFrame::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Raised);
        minimizeButton = new QPushButton(headerFrame);
        minimizeButton->setObjectName(QStringLiteral("minimizeButton"));
        minimizeButton->setGeometry(QRect(900, 0, 41, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font1.setPointSize(14);
        minimizeButton->setFont(font1);
        minimizeButton->setStyleSheet(QLatin1String("#minimizeButton{\n"
"\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#minimizeButton:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#minimizeButton:pressed {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"\n"
"}"));
        title = new QLabel(headerFrame);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(50, 0, 161, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font2.setPointSize(18);
        title->setFont(font2);
        title->setStyleSheet(QLatin1String("#title{\n"
"	color:white;\n"
"\n"
"}"));
        closeButton = new QPushButton(headerFrame);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(940, 0, 41, 41));
        closeButton->setFont(font1);
        closeButton->setStyleSheet(QLatin1String("#closeButton{\n"
"\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#closeButton:hover {\n"
"\n"
"	background-color:#FF5252;\n"
"\n"
"}\n"
"\n"
"#closeButton:pressed {\n"
"\n"
"	background-color:#FF5252;\n"
"\n"
"\n"
"}"));
        label = new QLabel(headerFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(8, 3, 35, 35));
        label->setStyleSheet(QLatin1String("#label {\n"
"background-image: url(:/BitCleanerIco.png);\n"
"}"));
        btn2 = new QPushButton(centralWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(0, 110, 215, 70));
        QFont font3;
        font3.setFamily(QStringLiteral("Leelawadee UI Semilight"));
        font3.setPointSize(12);
        btn2->setFont(font3);
        btn2->setStyleSheet(QLatin1String("#btn2{\n"
"\n"
"	background-color:#336699;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn2:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn2:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn2:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
""));
        btn2->setCheckable(true);
        btn3 = new QPushButton(centralWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(0, 180, 215, 70));
        btn3->setFont(font3);
        btn3->setStyleSheet(QLatin1String("#btn3{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn3:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn3:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn3:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
""));
        btn3->setCheckable(true);
        btn4 = new QPushButton(centralWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(0, 250, 215, 70));
        btn4->setFont(font3);
        btn4->setStyleSheet(QLatin1String("#btn4{\n"
"\n"
"	background-color:#336699;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn4:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn4:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn4:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
""));
        btn4->setCheckable(true);
        btn5 = new QPushButton(centralWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(0, 320, 215, 70));
        btn5->setFont(font3);
        btn5->setStyleSheet(QLatin1String("#btn5{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn5:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn5:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn5:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
""));
        btn5->setCheckable(true);
        btn5->setAutoRepeat(false);
        btn5->setAutoExclusive(false);
        btn6 = new QPushButton(centralWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(0, 390, 215, 70));
        btn6->setFont(font3);
        btn6->setStyleSheet(QLatin1String("#btn6{\n"
"\n"
"	background-color:#336699;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn6:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn6:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn6:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
""));
        btn6->setCheckable(true);
        btn6->setChecked(false);
        btn6->setAutoRepeat(false);
        btn6->setAutoExclusive(false);
        middleFrame = new QFrame(centralWidget);
        middleFrame->setObjectName(QStringLiteral("middleFrame"));
        middleFrame->setGeometry(QRect(600, 30, 20, 561));
        middleFrame->setStyleSheet(QLatin1String("#middleFrame {\n"
"	\n"
"	background-color:#336699;\n"
"\n"
"}"));
        middleFrame->setFrameShape(QFrame::StyledPanel);
        middleFrame->setFrameShadow(QFrame::Raised);
        bottomFrame = new QFrame(centralWidget);
        bottomFrame->setObjectName(QStringLiteral("bottomFrame"));
        bottomFrame->setGeometry(QRect(0, 530, 1001, 71));
        bottomFrame->setStyleSheet(QLatin1String("#bottomFrame {\n"
"	\n"
"	background-color:#336699;\n"
"\n"
"}"));
        bottomFrame->setFrameShape(QFrame::StyledPanel);
        bottomFrame->setFrameShadow(QFrame::Raised);
        execute_button = new QPushButton(bottomFrame);
        execute_button->setObjectName(QStringLiteral("execute_button"));
        execute_button->setGeometry(QRect(215, 0, 385, 70));
        execute_button->setFont(font3);
        execute_button->setStyleSheet(QLatin1String("#execute_button{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#execute_button:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#execute_button:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}"));
        cancel_button = new QPushButton(bottomFrame);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setGeometry(QRect(620, 0, 361, 70));
        cancel_button->setFont(font3);
        cancel_button->setStyleSheet(QLatin1String("#cancel_button {\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#cancel_button:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#cancel_button:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}"));
        cancel_button->raise();
        execute_button->raise();
        rightFrame = new QFrame(centralWidget);
        rightFrame->setObjectName(QStringLiteral("rightFrame"));
        rightFrame->setGeometry(QRect(980, 30, 20, 561));
        rightFrame->setStyleSheet(QLatin1String("#rightFrame {\n"
"	\n"
"	background-color:#336699;\n"
"\n"
"}"));
        rightFrame->setFrameShape(QFrame::StyledPanel);
        rightFrame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(210, 0, 401, 591));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(true);
        organizacja = new QWidget();
        organizacja->setObjectName(QStringLiteral("organizacja"));
        standardCheckBox = new QRadioButton(organizacja);
        standardCheckBox->setObjectName(QStringLiteral("standardCheckBox"));
        standardCheckBox->setGeometry(QRect(30, 80, 161, 19));
        QFont font4;
        font4.setFamily(QStringLiteral("Yu Gothic UI"));
        font4.setPointSize(14);
        standardCheckBox->setFont(font4);
        standardCheckBox->setChecked(true);
        noStandardCheckBox = new QRadioButton(organizacja);
        noStandardCheckBox->setObjectName(QStringLiteral("noStandardCheckBox"));
        noStandardCheckBox->setGeometry(QRect(30, 200, 161, 19));
        noStandardCheckBox->setFont(font4);
        customCheckBox = new QRadioButton(organizacja);
        customCheckBox->setObjectName(QStringLiteral("customCheckBox"));
        customCheckBox->setGeometry(QRect(30, 320, 131, 19));
        customCheckBox->setFont(font4);
        noStandardText = new QTextEdit(organizacja);
        noStandardText->setObjectName(QStringLiteral("noStandardText"));
        noStandardText->setGeometry(QRect(50, 250, 171, 41));
        noStandardText->setFont(font4);
        noStandardText->setStyleSheet(QLatin1String("#noStandardText{\n"
"placeholder: \"asdasd\";\n"
"}"));
        label_2 = new QLabel(organizacja);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 250, 141, 41));
        label_2->setFont(font4);
        custom1Text = new QTextEdit(organizacja);
        custom1Text->setObjectName(QStringLiteral("custom1Text"));
        custom1Text->setGeometry(QRect(50, 350, 291, 41));
        custom1Text->setFont(font4);
        label_3 = new QLabel(organizacja);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 400, 291, 31));
        label_3->setFont(font4);
        custom2Text = new QTextEdit(organizacja);
        custom2Text->setObjectName(QStringLiteral("custom2Text"));
        custom2Text->setGeometry(QRect(50, 440, 131, 41));
        custom2Text->setFont(font4);
        isFileName = new QCheckBox(organizacja);
        isFileName->setObjectName(QStringLiteral("isFileName"));
        isFileName->setGeometry(QRect(183, 442, 161, 31));
        isFileName->setFont(font4);
        isFileName->setLayoutDirection(Qt::RightToLeft);
        isFileName->setChecked(true);
        isFileName->setTristate(false);
        label_4 = new QLabel(organizacja);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 100, 401, 81));
        QFont font5;
        font5.setFamily(QStringLiteral("Yu Gothic UI"));
        font5.setPointSize(13);
        label_4->setFont(font5);
        tabWidget->addTab(organizacja, QString());
        czyszczenie = new QWidget();
        czyszczenie->setObjectName(QStringLiteral("czyszczenie"));
        standardCleanCheck1 = new QCheckBox(czyszczenie);
        standardCleanCheck1->setObjectName(QStringLiteral("standardCleanCheck1"));
        standardCleanCheck1->setGeometry(QRect(60, 110, 151, 41));
        standardCleanCheck1->setFont(font4);
        standardCleanCheck1->setChecked(true);
        standardCleanCheck2 = new QCheckBox(czyszczenie);
        standardCleanCheck2->setObjectName(QStringLiteral("standardCleanCheck2"));
        standardCleanCheck2->setGeometry(QRect(60, 160, 321, 41));
        standardCleanCheck2->setFont(font4);
        standardCleanCheck3 = new QCheckBox(czyszczenie);
        standardCleanCheck3->setObjectName(QStringLiteral("standardCleanCheck3"));
        standardCleanCheck3->setGeometry(QRect(60, 210, 351, 41));
        standardCleanCheck3->setFont(font4);
        standardCleanRadioButton = new QRadioButton(czyszczenie);
        standardCleanRadioButton->setObjectName(QStringLiteral("standardCleanRadioButton"));
        standardCleanRadioButton->setGeometry(QRect(30, 80, 191, 19));
        standardCleanRadioButton->setFont(font4);
        standardCleanRadioButton->setChecked(true);
        customCleanRadioButton = new QRadioButton(czyszczenie);
        customCleanRadioButton->setObjectName(QStringLiteral("customCleanRadioButton"));
        customCleanRadioButton->setGeometry(QRect(30, 270, 331, 31));
        customCleanRadioButton->setFont(font4);
        customCleanChars = new QTextEdit(czyszczenie);
        customCleanChars->setObjectName(QStringLiteral("customCleanChars"));
        customCleanChars->setGeometry(QRect(50, 310, 281, 41));
        customCleanChars->setFont(font4);
        infoClean = new QLabel(czyszczenie);
        infoClean->setObjectName(QStringLiteral("infoClean"));
        infoClean->setGeometry(QRect(50, 380, 301, 61));
        QFont font6;
        font6.setFamily(QStringLiteral("Yu Gothic UI"));
        font6.setPointSize(12);
        infoClean->setFont(font6);
        tabWidget->addTab(czyszczenie, QString());
        spacje = new QWidget();
        spacje->setObjectName(QStringLiteral("spacje"));
        changeSpaces2Radio = new QRadioButton(spacje);
        changeSpaces2Radio->setObjectName(QStringLiteral("changeSpaces2Radio"));
        changeSpaces2Radio->setGeometry(QRect(30, 130, 331, 31));
        changeSpaces2Radio->setFont(font4);
        changeSpaces1Radio = new QRadioButton(spacje);
        changeSpaces1Radio->setObjectName(QStringLiteral("changeSpaces1Radio"));
        changeSpaces1Radio->setGeometry(QRect(30, 70, 351, 51));
        changeSpaces1Radio->setFont(font4);
        changeSpaces1Radio->setChecked(true);
        removeHardSpacesRadio = new QRadioButton(spacje);
        removeHardSpacesRadio->setObjectName(QStringLiteral("removeHardSpacesRadio"));
        removeHardSpacesRadio->setGeometry(QRect(30, 210, 331, 31));
        removeHardSpacesRadio->setFont(font4);
        removeStandardSpacesRadio = new QRadioButton(spacje);
        removeStandardSpacesRadio->setObjectName(QStringLiteral("removeStandardSpacesRadio"));
        removeStandardSpacesRadio->setGeometry(QRect(30, 250, 331, 31));
        removeStandardSpacesRadio->setFont(font4);
        tabWidget->addTab(spacje, QString());
        zamiana = new QWidget();
        zamiana->setObjectName(QStringLiteral("zamiana"));
        changeTableWidget = new QTableWidget(zamiana);
        changeTableWidget->setObjectName(QStringLiteral("changeTableWidget"));
        changeTableWidget->setGeometry(QRect(20, 230, 351, 201));
        QFont font7;
        font7.setPointSize(12);
        changeTableWidget->setFont(font7);
        add = new QPushButton(zamiana);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(20, 460, 101, 41));
        add->setFont(font3);
        add->setStyleSheet(QLatin1String("#add{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#add:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#add:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        add->setCheckable(false);
        add->setChecked(false);
        reset = new QPushButton(zamiana);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(270, 460, 101, 41));
        reset->setFont(font3);
        reset->setStyleSheet(QLatin1String("#reset{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#reset:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#reset:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#reset:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
""));
        reset->setCheckable(false);
        reset->setChecked(false);
        remove = new QPushButton(zamiana);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(140, 460, 111, 41));
        remove->setFont(font3);
        remove->setStyleSheet(QLatin1String("#remove{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#remove:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#remove:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        remove->setCheckable(false);
        remove->setChecked(false);
        instrukcja_2 = new QPlainTextEdit(zamiana);
        instrukcja_2->setObjectName(QStringLiteral("instrukcja_2"));
        instrukcja_2->setGeometry(QRect(20, 50, 351, 171));
        instrukcja_2->setFont(font6);
        instrukcja_2->setStyleSheet(QStringLiteral("border:none;"));
        instrukcja_2->setReadOnly(true);
        tabWidget->addTab(zamiana, QString());
        konwersja = new QWidget();
        konwersja->setObjectName(QStringLiteral("konwersja"));
        capitalRadio = new QRadioButton(konwersja);
        capitalRadio->setObjectName(QStringLiteral("capitalRadio"));
        capitalRadio->setGeometry(QRect(30, 80, 331, 31));
        capitalRadio->setFont(font4);
        capitalRadio->setChecked(true);
        firstCapitalRadio = new QRadioButton(konwersja);
        firstCapitalRadio->setObjectName(QStringLiteral("firstCapitalRadio"));
        firstCapitalRadio->setGeometry(QRect(30, 200, 331, 51));
        firstCapitalRadio->setFont(font4);
        firstCapitalRadio->setChecked(false);
        wordsCapitalRadio = new QRadioButton(konwersja);
        wordsCapitalRadio->setObjectName(QStringLiteral("wordsCapitalRadio"));
        wordsCapitalRadio->setGeometry(QRect(30, 360, 331, 51));
        wordsCapitalRadio->setFont(font4);
        wordsCapitalRadio->setTabletTracking(false);
        wordsCapitalRadio->setChecked(false);
        noWordsCapitalRadio = new QRadioButton(konwersja);
        noWordsCapitalRadio->setObjectName(QStringLiteral("noWordsCapitalRadio"));
        noWordsCapitalRadio->setGeometry(QRect(30, 420, 331, 51));
        noWordsCapitalRadio->setFont(font4);
        noWordsCapitalRadio->setChecked(false);
        noCapitalRadio = new QRadioButton(konwersja);
        noCapitalRadio->setObjectName(QStringLiteral("noCapitalRadio"));
        noCapitalRadio->setGeometry(QRect(30, 120, 331, 31));
        noCapitalRadio->setFont(font4);
        noCapitalRadio->setChecked(false);
        noFirstCapitalRadio = new QRadioButton(konwersja);
        noFirstCapitalRadio->setObjectName(QStringLiteral("noFirstCapitalRadio"));
        noFirstCapitalRadio->setGeometry(QRect(30, 260, 331, 51));
        noFirstCapitalRadio->setFont(font4);
        noFirstCapitalRadio->setChecked(false);
        tabWidget->addTab(konwersja, QString());
        ustawienia = new QWidget();
        ustawienia->setObjectName(QStringLiteral("ustawienia"));
        languageGroup = new QGroupBox(ustawienia);
        languageGroup->setObjectName(QStringLiteral("languageGroup"));
        languageGroup->setGeometry(QRect(20, 50, 351, 211));
        languageGroup->setFont(font7);
        plLang = new QRadioButton(languageGroup);
        plLang->setObjectName(QStringLiteral("plLang"));
        plLang->setGeometry(QRect(20, 40, 84, 19));
        plLang->setFont(font7);
        plLang->setChecked(true);
        enLang = new QRadioButton(languageGroup);
        enLang->setObjectName(QStringLiteral("enLang"));
        enLang->setGeometry(QRect(20, 80, 84, 19));
        enLang->setFont(font7);
        usingGroup = new QGroupBox(ustawienia);
        usingGroup->setObjectName(QStringLiteral("usingGroup"));
        usingGroup->setGeometry(QRect(20, 270, 351, 241));
        usingGroup->setFont(font7);
        onTop = new QCheckBox(usingGroup);
        onTop->setObjectName(QStringLiteral("onTop"));
        onTop->setGeometry(QRect(20, 50, 281, 19));
        tabWidget->addTab(ustawienia, QString());
        oprogramie = new QWidget();
        oprogramie->setObjectName(QStringLiteral("oprogramie"));
        instrukcja = new QPlainTextEdit(oprogramie);
        instrukcja->setObjectName(QStringLiteral("instrukcja"));
        instrukcja->setGeometry(QRect(20, 50, 351, 461));
        instrukcja->setFont(font6);
        instrukcja->setStyleSheet(QStringLiteral("border:none;"));
        instrukcja->setReadOnly(true);
        tabWidget->addTab(oprogramie, QString());
        btn7 = new QPushButton(centralWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(0, 460, 215, 70));
        btn7->setFont(font3);
        btn7->setStyleSheet(QLatin1String("#btn7{\n"
"\n"
"	background-color:#225588;\n"
"	border: none;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"#btn7:hover {\n"
"\n"
"	background-color:#1976D2;\n"
"\n"
"}\n"
"\n"
"#btn7:pressed {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
"#btn7:checked {\n"
"\n"
"	background-color:#6AAECB;\n"
"\n"
"}\n"
"\n"
""));
        btn7->setCheckable(true);
        btn7->setChecked(true);
        fileListWidget = new QListWidget(centralWidget);
        fileListWidget->setObjectName(QStringLiteral("fileListWidget"));
        fileListWidget->setGeometry(QRect(620, 40, 361, 491));
        QFont font8;
        font8.setFamily(QStringLiteral("Microsoft JhengHei UI Light"));
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        font8.setKerning(true);
        fileListWidget->setFont(font8);
        fileListWidget->setFocusPolicy(Qt::StrongFocus);
        fileListWidget->setStyleSheet(QStringLiteral(""));
        fileListWidget->setFrameShape(QFrame::NoFrame);
        fileListWidget->setFrameShadow(QFrame::Sunken);
        fileListWidget->setLineWidth(4);
        fileListWidget->setDragEnabled(false);
        fileListWidget->setDragDropOverwriteMode(false);
        fileListWidget->setDragDropMode(QAbstractItemView::DropOnly);
        fileListWidget->setDefaultDropAction(Qt::MoveAction);
        fileListWidget->setAlternatingRowColors(true);
        fileListWidget->setMovement(QListView::Static);
        fileListWidget->setFlow(QListView::TopToBottom);
        fileListWidget->setProperty("isWrapping", QVariant(false));
        fileListWidget->setResizeMode(QListView::Fixed);
        fileListWidget->setLayoutMode(QListView::Batched);
        fileListWidget->setSpacing(6);
        fileListWidget->setSortingEnabled(false);
        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        rightFrame->raise();
        middleFrame->raise();
        bottomFrame->raise();
        btn6->raise();
        btn5->raise();
        btn4->raise();
        btn3->raise();
        btn2->raise();
        btn1->raise();
        btn7->raise();
        fileListWidget->raise();
        headerFrame->raise();
        QWidget::setTabOrder(noStandardCheckBox, noCapitalRadio);
        QWidget::setTabOrder(noCapitalRadio, firstCapitalRadio);
        QWidget::setTabOrder(firstCapitalRadio, noFirstCapitalRadio);
        QWidget::setTabOrder(noFirstCapitalRadio, wordsCapitalRadio);
        QWidget::setTabOrder(wordsCapitalRadio, btn7);
        QWidget::setTabOrder(btn7, standardCheckBox);
        QWidget::setTabOrder(standardCheckBox, noStandardText);
        QWidget::setTabOrder(noStandardText, capitalRadio);
        QWidget::setTabOrder(capitalRadio, customCheckBox);
        QWidget::setTabOrder(customCheckBox, custom1Text);
        QWidget::setTabOrder(custom1Text, custom2Text);
        QWidget::setTabOrder(custom2Text, isFileName);
        QWidget::setTabOrder(isFileName, execute_button);
        QWidget::setTabOrder(execute_button, btn1);
        QWidget::setTabOrder(btn1, fileListWidget);
        QWidget::setTabOrder(fileListWidget, minimizeButton);
        QWidget::setTabOrder(minimizeButton, closeButton);
        QWidget::setTabOrder(closeButton, tabWidget);
        QWidget::setTabOrder(tabWidget, btn2);
        QWidget::setTabOrder(btn2, standardCleanCheck3);
        QWidget::setTabOrder(standardCleanCheck3, standardCleanRadioButton);
        QWidget::setTabOrder(standardCleanRadioButton, customCleanRadioButton);
        QWidget::setTabOrder(customCleanRadioButton, customCleanChars);
        QWidget::setTabOrder(customCleanChars, instrukcja);
        QWidget::setTabOrder(instrukcja, standardCleanCheck1);
        QWidget::setTabOrder(standardCleanCheck1, standardCleanCheck2);
        QWidget::setTabOrder(standardCleanCheck2, changeSpaces2Radio);
        QWidget::setTabOrder(changeSpaces2Radio, changeSpaces1Radio);
        QWidget::setTabOrder(changeSpaces1Radio, removeHardSpacesRadio);
        QWidget::setTabOrder(removeHardSpacesRadio, removeStandardSpacesRadio);
        QWidget::setTabOrder(removeStandardSpacesRadio, changeTableWidget);
        QWidget::setTabOrder(changeTableWidget, add);
        QWidget::setTabOrder(add, reset);
        QWidget::setTabOrder(reset, remove);
        QWidget::setTabOrder(remove, btn6);
        QWidget::setTabOrder(btn6, btn3);
        QWidget::setTabOrder(btn3, btn5);
        QWidget::setTabOrder(btn5, noWordsCapitalRadio);
        QWidget::setTabOrder(noWordsCapitalRadio, cancel_button);
        QWidget::setTabOrder(cancel_button, btn4);

        retranslateUi(MainWindow);

        btn1->setDefault(false);
        tabWidget->setCurrentIndex(4);
        fileListWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BitCleaner", nullptr));
        btn1->setText(QApplication::translate("MainWindow", "Organizacja", nullptr));
        minimizeButton->setText(QApplication::translate("MainWindow", "_", nullptr));
        title->setText(QApplication::translate("MainWindow", "BitCleaner", nullptr));
        closeButton->setText(QApplication::translate("MainWindow", "X", nullptr));
        label->setText(QString());
        btn2->setText(QApplication::translate("MainWindow", "Czyszczenie", nullptr));
        btn3->setText(QApplication::translate("MainWindow", "Spacje", nullptr));
        btn4->setText(QApplication::translate("MainWindow", "Zamiana", nullptr));
        btn5->setText(QApplication::translate("MainWindow", "Notacja", nullptr));
        btn6->setText(QApplication::translate("MainWindow", "Ustawienia", nullptr));
        execute_button->setText(QApplication::translate("MainWindow", "Zastosuj", nullptr));
        cancel_button->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        standardCheckBox->setText(QApplication::translate("MainWindow", "Standardowa", nullptr));
        noStandardCheckBox->setText(QApplication::translate("MainWindow", "Niestandardowa", nullptr));
        customCheckBox->setText(QApplication::translate("MainWindow", "W\305\202asna", nullptr));
        noStandardText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "+  Nazwa pliku", nullptr));
        custom1Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "+    Numer wed\305\202ug kolejno\305\233ci    +", nullptr));
        custom2Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        isFileName->setText(QApplication::translate("MainWindow", "+  Nazwa pliku  ", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Numerowanie wed\305\202ug listy\n"
"Liczba pojawi si\304\231 przed nazw\304\205 pliku", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(organizacja), QApplication::translate("MainWindow", "Tab 1", nullptr));
        standardCleanCheck1->setText(QApplication::translate("MainWindow", ". , - + =", nullptr));
        standardCleanCheck2->setText(QApplication::translate("MainWindow", "1 2 3 4 5 6 7 8 9 0", nullptr));
        standardCleanCheck3->setText(QApplication::translate("MainWindow", "! @ # $ % ^ ( )", nullptr));
        standardCleanRadioButton->setText(QApplication::translate("MainWindow", "Standardowe", nullptr));
        customCleanRadioButton->setText(QApplication::translate("MainWindow", "W\305\202asne znaki", nullptr));
        customCleanChars->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        infoClean->setText(QApplication::translate("MainWindow", "Podpowied\305\272\n"
"Nie musisz oddziela\304\207 znak\303\263w spacj\304\205!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(czyszczenie), QApplication::translate("MainWindow", "Tab 1", nullptr));
        changeSpaces2Radio->setText(QApplication::translate("MainWindow", "Zamie\305\204 twarde spacje na mi\304\231kkie", nullptr));
        changeSpaces1Radio->setText(QApplication::translate("MainWindow", "Zamie\305\204 mi\304\231kkie spacje na twarde", nullptr));
        removeHardSpacesRadio->setText(QApplication::translate("MainWindow", "Usu\305\204 twarde spacje", nullptr));
        removeStandardSpacesRadio->setText(QApplication::translate("MainWindow", "Usu\305\204 mi\304\231kkie spacje", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(spacje), QApplication::translate("MainWindow", "Strona", nullptr));
        add->setText(QApplication::translate("MainWindow", "Dodaj", nullptr));
        reset->setText(QApplication::translate("MainWindow", "Resetuj", nullptr));
        remove->setText(QApplication::translate("MainWindow", "Skasuj", nullptr));
        instrukcja_2->setPlainText(QApplication::translate("MainWindow", "Oto lista zamiany znak\303\263w. Wpisz w pierwsz\304\205 (lew\304\205) kom\303\263rk\304\231 znak lub tekst, kt\303\263ry chcesz zamieni\304\207.\n"
"W drug\304\205 (praw\304\205) kom\303\263rk\304\231 wpisz tekst lub znak na jaki chcesz zamieni\304\207.\n"
"Mo\305\274esz zamieni\304\207 dowoln\304\205 ilo\305\233\304\207 wyra\305\274e\305\204 wystarczy, \305\274e dodasz kolejny wiersz do listy.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(zamiana), QApplication::translate("MainWindow", "Strona", nullptr));
        capitalRadio->setText(QApplication::translate("MainWindow", "Nazwa wielkimi literami", nullptr));
        firstCapitalRadio->setText(QApplication::translate("MainWindow", "Nazwa rozpoczyna si\304\231 wielk\304\205 liter\304\205", nullptr));
        wordsCapitalRadio->setText(QApplication::translate("MainWindow", "Ka\305\274de s\305\202owo rozpoczyna si\304\231\n"
"wielk\304\205 liter\304\205", nullptr));
        noWordsCapitalRadio->setText(QApplication::translate("MainWindow", "Ka\305\274de s\305\202owo rozpoczyna si\304\231\n"
"ma\305\202\304\205 liter\304\205", nullptr));
        noCapitalRadio->setText(QApplication::translate("MainWindow", "Nazwa ma\305\202ymi literami", nullptr));
        noFirstCapitalRadio->setText(QApplication::translate("MainWindow", "Nazwa rozpoczyna si\304\231 ma\305\202\304\205 liter\304\205", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(konwersja), QApplication::translate("MainWindow", "Strona", nullptr));
        languageGroup->setTitle(QApplication::translate("MainWindow", "J\304\231zyk programu", nullptr));
        plLang->setText(QApplication::translate("MainWindow", "Polski", nullptr));
        enLang->setText(QApplication::translate("MainWindow", "Angielski", nullptr));
        usingGroup->setTitle(QApplication::translate("MainWindow", "Obs\305\202uga", nullptr));
        onTop->setText(QApplication::translate("MainWindow", "Okno programu zawsze na wierzchu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ustawienia), QApplication::translate("MainWindow", "Strona", nullptr));
        instrukcja->setPlainText(QApplication::translate("MainWindow", "Warto wiedzie\304\207!\n"
"\n"
"Program s\305\202u\305\274y g\305\202\303\263wnie do porz\304\205dkowania nazw plik\303\263w (Numerowania, Oczyszczania nazw), pr\303\263cz tego oferuje wiele dodatkowych opcji.\n"
"\n"
"Zanim rozpoczniesz prac\304\231 na w\305\202a\305\233ciwych plikach przetestuj wszystkie dost\304\231pne opcje na plikach testowych (np: pusty folder).\n"
"\n"
"Aby rozpocz\304\205\304\207 przeci\304\205gnij i upu\305\233\304\207 pliki na okno programu - pliki zostan\304\205 dodane do listy.\n"
"\n"
"\n"
"\n"
"", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(oprogramie), QApplication::translate("MainWindow", "Strona", nullptr));
        btn7->setText(QApplication::translate("MainWindow", "O Programie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
