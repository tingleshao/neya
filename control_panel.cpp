#include "control_panel.h"

control_panel::control_panel()
{
    slider = new sliders_group(tr("w"));


    stackedWidget = new QStackedWidget;
    stackedWidget->addWidget(slider);

  //  createControls(tr("Controls"));

   // connect();
    QHBoxLayout *layout = new QHBoxLayout;
  //  layout->addWidget(controlsGroup);
    layout->addWidget(stackedWidget);
    setLayout(layout);

}
