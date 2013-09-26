#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    slider = new sliders_group(tr("w"));


}

MainWindow::~MainWindow()
{
    delete ui;
}
