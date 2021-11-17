#ifndef SETTINGSMENU_H
#define SETTINGSMENU_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class SettingsMenu : public QWidget
{
    Q_OBJECT
public:
    explicit SettingsMenu(QWidget *parent = nullptr);

private:
    QGridLayout *mainLayout;

    QPushButton *quitButton;

signals:

};

#endif // SETTINGSMENU_H
