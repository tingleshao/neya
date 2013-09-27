#include "sliders_group.h"

sliders_group::sliders_group(const QString &title, QLabel * threshold_img_label, QImage * img, QWidget *parent) : QGroupBox(title, parent)
{
    slider = new QSlider();
    slider->setFocusPolicy(Qt::StrongFocus);
    slider->setTickPosition(QSlider::TicksBothSides);
    slider->setTickInterval(10);
    slider->setSingleStep(1);

    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(setValue(int)));

    QHBoxLayout *slidersLayout = new QHBoxLayout;
    slidersLayout->addWidget(slider);
    setLayout(slidersLayout);
    this->threshold_img_label = threshold_img_label;
    this->img = img;
    slider->setMaximum(255);


}


void sliders_group::setValue(int value)  {
    slider->setValue(value);
    int i, j ;
    this->setTitle(QString::number(value));

    QImage threshold_img(*img);
    for (i = 0; i < img->width(); i++) {
        for (j = 0; j < img->height(); j++) {
            int pixel_intensity = qGray(img->pixel(i,j));
            if (pixel_intensity < value) {
                threshold_img.setPixel(i,j,qRgb(0,0,0));
            }
            else {
                threshold_img.setPixel(i,j,qRgb(255,255,255));
            }
        }
    }
    threshold_img_label->setPixmap(QPixmap::fromImage(threshold_img));

}

void sliders_group::setMinimum(int value) {
    slider->setMinimum(value);
}

void sliders_group::setMaximum(int value){
    slider->setMaximum(value);
}


