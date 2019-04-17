#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QUrl>
#include <QMimeData>
#include "FileManager.h"
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum {ORGANIZE,CLEAN,SPACES,CHANGE,CONVERT,SETTINGS,ABOUT};
    enum {POLISH, ENGLISH};
    Ui::MainWindow *ui;
    explicit MainWindow(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    void unCheckMenuButtons();

    ~MainWindow();

private slots:

    void on_closeButton_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_minimizeButton_clicked();
    void on_execute_button_clicked();
    void on_cancel_button_clicked();
    void on_add_clicked();
    void on_remove_clicked();
    void on_reset_clicked();
    void changeLanguage(int);

private:

    bool mMoving;
    FileManager *fM;
    __int8 menuSection;
    QPoint mLastMousePosition;
    QUrl url;
};

#endif // MAINWINDOW_H
