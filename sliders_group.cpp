#include "sliders_group.h"

sliders_group::sliders_group(const QString &title, QWidget *parent) : QGroupBox(title, parent)
{
    slider = new QSlider();
    slider->setFocusPolicy(Qt::StrongFocus);
    slider->setTickPosition(QSlider::TicksBothSides);
    slider->setTickInterval(10);
    slider->setSingleStep(1);

    connect(slider, SIGNAL(valueChanged(int)), this, SIGNAL(valueChanged(int)));


    //slidersLayout->addWidget(slider);


}

void sliders_group::setValue(int value)  {
    slider->setValue(value);
}

void sliders_group::setMinimum(int value) {
    slider->setMinimum(value);
}

void sliders_group::setMaximum(int value){
    slider->setMaximum(value);
}


