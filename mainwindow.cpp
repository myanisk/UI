#include "mainwindow.h"
#include <stdio.h>
#include <QDebug>
#include "globals.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QRect windowSpace(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

    setGeometry(windowSpace);
    setStyleSheet("background-color:#9E9FA0");

    mainLayout = new QVBoxLayout(this);

    infoBar = new InfoBar(this);
    mainLayout->addWidget(infoBar);

    mainMenu = new MainMenu(this);
    mainLayout->addWidget(mainMenu);

    homeButton = new QPushButton("Home", this);
    homeButton->setGeometry(100, 100, 100, 100);
    homeButton->setStyleSheet("border-image: url("+QString(IMG_PATH)+"home.png)");
    homeButton->hide();

    connect(homeButton, SIGNAL(released()), this, SLOT(backToHome()));

    interphoneMenu = new InterphoneMenu(this);
    interphoneMenu->hide();

    statsmpMenu = new StatsmpMenu(this);
    statsmpMenu->hide();

    settingsMenu = new SettingsMenu(this);
    settingsMenu->hide();
}

MainWindow::~MainWindow()
{

}




void MainWindow::showSettings()
{
    mainMenu->hide();
    settingsMenu->show();

    homeButton->show();
}
void MainWindow::showStatsmp()
{

    mainMenu->hide();
    statsmpMenu->show();
    homeButton->show();
}
void MainWindow::showStatsmp2()
{

    mainMenu->hide();
    setStyleSheet("background-color:#F30404 ");
    statsmpMenu->show();
    homeButton->show();
}


void MainWindow::showInterphone()
{
    mainMenu->hide();
    interphoneMenu->show();

    homeButton->show();
}


void MainWindow::backToHome()
{

    settingsMenu->hide();
    interphoneMenu->hide();
    statsmpMenu->hide();

    mainMenu->show();
    setStyleSheet("background-color:#9E9FA0");
    homeButton->hide();
}
