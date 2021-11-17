#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

#include "globals.h"

class MainMenu : public QWidget
{
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = nullptr);

private:
    QGridLayout *mainLayout;

    QPushButton *MBButton;
    QPushButton *interphoneButton;
    QPushButton *statsButton;
    QPushButton *settingsButton;

signals:

};

#endif // MAINMENU_H
