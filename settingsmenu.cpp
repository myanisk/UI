#include "settingsmenu.h"

SettingsMenu::SettingsMenu(QWidget *parent) : QWidget(parent)
{
    setGeometry(parent->width()/4, parent->height()/4, parent->width()/2, parent->height()/2);

    mainLayout = new QGridLayout(this);
    setLayout(mainLayout);

    quitButton = new QPushButton("Quit", this);
    quitButton->setStyleSheet("color: #606062;");
    mainLayout->addWidget(quitButton);
    connect(quitButton, SIGNAL(clicked()), parent, SLOT(close()));
}
