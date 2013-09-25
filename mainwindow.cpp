#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qlabel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // this->setFixedSize(500,500);
 //   QImage head1("/head,png");
  //  QPixmap *img = new QPixmap("/head.png");
   // QLabel *img_label = new QLabel();
    //img_label->setPixmap(*img);
    //img_label->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
