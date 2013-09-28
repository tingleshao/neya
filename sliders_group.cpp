#include "sliders_group.h"

sliders_group::sliders_group(const QString &title, QLabel * threshold_img_label, QImage * img, QWidget *parent) : QGroupBox(title, parent)
{
    slider1 = new QSlider();
    slider1->setFocusPolicy(Qt::StrongFocus);
    slider1->setTickPosition(QSlider::TicksBothSides);
    slider1->setTickInterval(10);
    slider1->setSingleStep(1);
    slider1->setMaximum(255);

    slider2 = new QSlider();
    slider2->setFocusPolicy(Qt::StrongFocus);
    slider2->setTickPosition(QSlider::TicksBothSides);
    slider2->setTickInterval(10);
    slider2->setSingleStep(1);
    slider2->setMaximum(255);


    connect(slider1, SIGNAL(valueChanged(int)), this, SLOT(setValue1(int)));
    connect(slider2, SIGNAL(valueChanged(int)), this, SLOT(setValue2(int)));

    QHBoxLayout *slidersLayout = new QHBoxLayout;
    slidersLayout->addWidget(slider1);
    slidersLayout->addWidget(slider2);

    setLayout(slidersLayout);
    this->threshold_img_label = threshold_img_label;
    this->img = img;

}


void sliders_group::setValue1(int value)  {

    this->slider2_value = value;
    update_img();
}

void sliders_group::setValue2(int value) {

    this->slider1_value = value;
    update_img();
}

void sliders_group::update_img() {

   // slider->setValue(value);
    int i, j ;
   // this->setTitle(QString::number(value));

    QImage threshold_img(*img);
    for (i = 0; i < img->width(); i++) {
        for (j = 0; j < img->height(); j++) {
            int pixel_intensity = qGray(img->pixel(i,j));
            threshold_img.setPixel(i,j,qRgb(0,0,0));

            if (pixel_intensity > slider1_value) {
                threshold_img.setPixel(i,j,qRgb(255/2,0,0));
            }
            if (pixel_intensity > slider2_value) {
                int th_pixel_intensity = qGray(img->pixel(i,j));
                threshold_img.setPixel(i,j,qRgb(th_pixel_intensity,th_pixel_intensity,255/2));
            }
        }
    }

    threshold_img_label->setPixmap(QPixmap::fromImage(threshold_img));


}

/**
void sliders_group::setMinimum(int value) {
    slider->setMinimum(value);
}

void sliders_group::setMaximum(int value){
    slider->setMaximum(value);
}

*/
