#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_MainWindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
    MainWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);

private slots:
	void ChangeSourceFolder();
	void GenerateCode();

private:
    Ui::MainWindow ui;
};

#endif //MAINWINDOW_H
