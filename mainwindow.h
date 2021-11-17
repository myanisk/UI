#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QStateMachine>
#include <QState>
#include <QSignalTransition>
#include <QString>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QToolBar>

#include "infobar.h"
#include "mainmenu.h"
#include "settingsmenu.h"
#include "interphonemenu.h"
#include "statsmp.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QVBoxLayout *mainLayout;

    InfoBar *infoBar;

    MainMenu *mainMenu;

    QPushButton *FireButton;

    QPushButton *homeButton;

    SettingsMenu *settingsMenu;

    InterphoneMenu *interphoneMenu;

    StatsmpMenu *statsmpMenu;


public slots:

    void showSettings();
    void showStatsmp2();
    void showInterphone();
    void showStatsmp();
    void backToHome();
};
#endif // MAINWINDOW_H
