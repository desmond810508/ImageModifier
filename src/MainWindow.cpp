#include <QFileDialog>
#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags)
	:QMainWindow(parent, flags)
{
    ui.setupUi(this);
	connect(ui.buttonChangeFolder, SIGNAL(clicked()), this, SLOT(ChangeSourceFolder()));
	connect(ui.buttonGenerateCode, SIGNAL(clicked()), this, SLOT(GenerateCode()));
}

void MainWindow::ChangeSourceFolder()
{
	QFileDialog dlg(this);
	dlg.setFileMode(QFileDialog::DirectoryOnly);
	dlg.setViewMode(QFileDialog::Detail);
	dlg.exec();
}

void MainWindow::GenerateCode(){
	QFileDialog dlg(this);
	dlg.setFileMode(QFileDialog::AnyFile);
	dlg.setViewMode(QFileDialog::Detail);
	dlg.exec();
}

