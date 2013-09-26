#include <QtGui/QApplication>
#include "mainwindow.h"
#include "QLabel"
#include "QImage"
#include "QPixmap"
#include "QGraphicsScene"
#include "QGraphicsView"
#include "QGraphicsPixmapItem"
#include "QVector"
#include "QRgb"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QVector<QRgb> colorTable;
    for (int i = 0; i < 256; i++) {
        colorTable.push_back(qRgb(i,i,i));
    }
    QImage *img = new QImage("/home/chong/qt/neya/head.png");
    img->setColorTable(colorTable);
    QLabel * img_label = new QLabel();
    img_label->setPixmap(QPixmap::fromImage(*img, Qt::AutoColor));
 // img_label->setBackgroundRole(QPalette::Base);
 // img_label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
 // img_label->setScaledContents(true);

    img_label->show();

    return a.exec();
}

