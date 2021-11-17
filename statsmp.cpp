#include "statsmp.h"




StatsmpMenu::StatsmpMenu(QWidget *parent) : QWidget(parent)
{

    setGeometry(parent->width()/4, parent->height()/4, parent->width()/2, parent->height()/2);

    uint16_t maxButtonsSize = parent->height()/5;

    mainLayout = new QGridLayout(this);
    setLayout(mainLayout);


    MpButton = new QPushButton(this);
    MpButton->setStyleSheet("border-image: url("+QString(IMG_PATH)+"Borne-MobilProtect.png)");
    MpButton->setMaximumSize(QSize(maxButtonsSize, maxButtonsSize));
    MpButton->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    mainLayout->addWidget(MpButton);
    connect(MpButton, SIGNAL(clicked()), parent, SLOT(showStatsmp2()));




}
