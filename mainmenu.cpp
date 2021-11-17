#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent) : QWidget(parent)
{
    setGeometry(parent->width()/4, parent->height()/4, parent->width()/2, parent->height()/2);

    uint16_t maxButtonsSize = parent->height()/5;

    mainLayout = new QGridLayout(this);
    setLayout(mainLayout);

    uint8_t colCount = 3;
    uint8_t rowCount = 2;

    for(uint8_t i=0; i < colCount; i++)
    {
        mainLayout->setColumnStretch(i, 1);
    }

    for(uint8_t i=0; i < rowCount; i++)
    {
        mainLayout->setRowStretch(i, 1);
    }

    statsButton = new QPushButton(this);
    statsButton->setStyleSheet("border-image: url("+QString(IMG_PATH)+"stats.png)");
    statsButton->setMaximumSize(QSize(maxButtonsSize, maxButtonsSize));
    statsButton->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    mainLayout->addWidget(statsButton);
    connect(statsButton, SIGNAL(clicked()), parent, SLOT(showStatsmp()));

//    MBButton = new QPushButton(this);
//    MBButton->setStyleSheet("border-image: url("+QString(IMG_PATH)+"cropped-Logo-MobilProtect (1) (1).png)");
//    MBButton->setMaximumSize(QSize(maxButtonsSize, maxButtonsSize));
//    MBButton->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
//    mainLayout->addWidget(MBButton);

    settingsButton = new QPushButton(this);
    settingsButton->setStyleSheet("border-image: url("+QString(IMG_PATH)+"settings.png)");
    settingsButton->setMaximumSize(QSize(maxButtonsSize, maxButtonsSize));
    settingsButton->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    mainLayout->addWidget(settingsButton);
    connect(settingsButton, SIGNAL(clicked()), parent, SLOT(showSettings()));

    interphoneButton = new QPushButton(this);
    interphoneButton->setStyleSheet("border-image: url("+QString(IMG_PATH)+"phone.png)");
    interphoneButton->setMaximumSize(QSize(maxButtonsSize, maxButtonsSize));
    interphoneButton->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
    mainLayout->addWidget(interphoneButton);
    connect(interphoneButton, SIGNAL(clicked()), parent, SLOT(showInterphone()));
}
