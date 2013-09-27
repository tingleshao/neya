#ifndef SLIDERS_GROUP_H
#define SLIDERS_GROUP_H

#include "QGroupBox"
#include "QSlider"
#include "QBoxLayout"
#include <stdio.h>
#include <QLabel>

class sliders_group : public QGroupBox {

    Q_OBJECT

    public:
        sliders_group(const QString &title, QLabel * threshold_img_label, QImage * img,
                      QWidget *parent=0);

    signals:
        void valueChanged(int value);

    public slots:
        void setValue(int value);
        void setMinimum(int value);
        void setMaximum(int value);

    private:
        QSlider *slider;
        QLabel *threshold_img_label;
        QImage * img;

};



#endif // SLIDERS_GROUP_H
