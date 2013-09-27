#include "control_panel.h"

control_panel::control_panel(QLabel * threshold_img_label, QImage * img )
{
    slider = new sliders_group(tr("w"), threshold_img_label, img, 0);
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
