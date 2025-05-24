#ifndef CHANGETHEME_H
#define CHANGETHEME_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class ChangeTheme;
}

class ChangeTheme : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeTheme(QWidget *parent = nullptr);
    ~ChangeTheme();

    void SetDarkTheme(QObject* parent);

    void CreateConnections();

    void MessageLabelColor(QPalette prevColor);

    void SetIcon();

private slots:
    void OnBtnApplyThemeClicked();
    void OnBtnCancelThemeClicked();

private:
    Ui::ChangeTheme *ui;
};

#endif // CHANGETHEME_H
