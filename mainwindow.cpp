#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   // ui->setupUi(this);

   // slider = new sliders_group(tr("w"), );


    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(slider);

  //  createControls(tr("Controls"));

   // connect();
    QHBoxLayout *layout = new QHBoxLayout;
  //  layout->addWidget(controlsGroup);
    layout->addWidget(stackedWidget);
    setLayout(layout);

   // connect(slider, SIGNAL(valueChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
