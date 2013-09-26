#ifndef SLIDERS_GROUP_H
#define SLIDERS_GROUP_H

#include "QGroupBox"
#include "QSlider"
#include "QBoxLayout"

class sliders_group : public QGroupBox {

    Q_OBJECT

    public:
        sliders_group(const QString &title,
                      QWidget *parent=0);

    signals:
        void valueChanged(int value);

    public slots:
        void setValue(int value);
        void setMinimum(int value);
        void setMaximum(int value);

    private:
        QSlider *slider;

};



#endif // SLIDERS_GROUP_H
