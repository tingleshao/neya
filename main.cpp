#include <QtGui/QApplication>
#include "mainwindow.h"
#include "QLabel"
#include "QImage"
#include "QPixmap"
#include "QGraphicsScene"
#include "QGraphicsView"
#include "QGraphicsPixmapItem"
#include "qlabel.h"
#include "qpixmap.h";
#include "qimage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
 //   w.show();
  //  QString *path = new QString("head.png");
    QImage *img = new QImage("/home/chong/qt/neya/head.png");
   // QPixmap img = new QPixmap("head.png");
   QLabel * img_label = new QLabel();
    img_label->setPixmap(QPixmap::fromImage(*img));
   // img_label->setBackgroundRole(QPalette::Base);
    //  img_label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
     //img_label->setScaledContents(true);

    img_label->show();

  //  QPixmap image = new QPixmap("blah.jpg");

  //  QLabel imageLabel = new QLabel();
   // imageLabel.setPixmap(image);

   // mainLayout.addWidget(imageLabel);


 //   QGraphicsScene scene;
  //  QGraphicsView view(&scene);
  //  QGraphicsPixmapItem item(QPixmap("~/head2.png"));
  //  scene.addItem(&item);
  //  view.show();

    return a.exec();
}

