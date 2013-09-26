#ifndef CONTROL_PANEL_H
#define CONTROL_PANEL_H

#include <QWidget>
#include <QStackedWidget>
#include "sliders_group.h"

class control_panel : public QWidget
{
    Q_OBJECT
public:
    control_panel();

private:
    sliders_group *slider;
    QStackedWidget *stackedWidget;


};

#endif // CONTROL_PANEL_H
