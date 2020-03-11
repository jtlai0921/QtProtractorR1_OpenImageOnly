#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openImage()
{
    QFileDialog *openDialog = new QFileDialog();
    QImage img;
    if(openDialog->exec()==QDialog::Accepted)
    {
        img.load(openDialog->selectedFiles()[0]);
        ui->showPic->setPixmap(QPixmap::fromImage(img));
    }
}
