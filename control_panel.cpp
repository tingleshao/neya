#include "control_panel.h"

control_panel::control_panel()
{
    slider = new sliders_group(tr("w"));


    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(slider);
  //  createControls(tr("Controls"));


    // TODO: fix there to read the number
    //  how to set min and max for the slider?
   // connect();
    QHBoxLayout *layout = new QHBoxLayout;
  //  layout->addWidget(controlsGroup);
    layout->addWidget(stackedWidget);
    setLayout(layout);

}
