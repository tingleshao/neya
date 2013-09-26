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
#include "QSize"

#include "image_thresholder.h"

#define BACKGROUND_THRESHOLD 90 // define the background thereshold 50

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int i,j;
    MainWindow w;
    w.show();
    QVector<QRgb> colorTable;
    for (i = 0; i < 256; i++) {
        colorTable.push_back(qRgb(i,i,i));
    }
    QImage *img = new QImage("/home/chong/qt/neya/head.png");
    img->setColorTable(colorTable);
    QLabel * img_label = new QLabel();
    img_label->setPixmap(QPixmap::fromImage(*img, Qt::AutoColor));
 // img_label->setBackgroundRole(QPalette::Base);
 // img_label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
 // img_label->setScaledContents(true);

    // make an new image based on the threshold
    QImage *threshold_img = new QImage(*img);
    for (i = 0; i < img->width(); i++) {
        for (j = 0; j < img->height(); j++) {
            int pixel_intensity = qGray(img->pixel(i,j));
            if (pixel_intensity < BACKGROUND_THRESHOLD) {
                threshold_img->setPixel(i,j,qRgb(0,0,0));
            }
            else {
                threshold_img->setPixel(i,j,img->pixel(i,j));
            }
        }
    }
    QLabel * threshold_img_label = new QLabel();
    threshold_img_label->setPixmap(QPixmap::fromImage(*threshold_img));

    threshold_img_label->show();

    img_label->show();

    return a.exec();
}

