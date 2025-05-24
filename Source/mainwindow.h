#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "changetheme.h"
#include <QWidget>
#include <string>
#include <iostream>
#include <QString>
#include <QLineEdit>
#include <cmath>
#include <algorithm>
#include <QDialog>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QChar>
#include <QColor>
#include <QPalette>
#include <QUrl>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QLineEdit* GetLineEdit();
    QPushButton* GetBtn0();
    QPushButton* GetBtn1();
    QPushButton* GetBtn2();
    QPushButton* GetBtn3();
    QPushButton* GetBtn4();
    QPushButton* GetBtn5();
    QPushButton* GetBtn6();
    QPushButton* GetBtn7();
    QPushButton* GetBtn8();
    QPushButton* GetBtn9();
    QPushButton* GetBtnPlus();
    QPushButton* GetBtnEqual();
    QPushButton* GetBtnMinus();
    QPushButton* GetBtnDivide();
    QPushButton* GetBtnDot();
    QPushButton* GetBtnClear();
    QPushButton* GetBtnDelete();
    QPushButton* GetBtnModulo();
    QPushButton* GetBtnPerfectSquare();
    QPushButton* GetBtnX();
    QPushButton* GetBtnChangeTheme();

    void CheckNumberValue();
    void SetStyles();

    void MakeConnections();

    void SetIcon();

public slots:
    void on_btn0_clicked();

    void on_btn1_clicked();

    void on_btn3_clicked();

    void on_btn2_clicked();

    void on_btn4_clicked();

    void on_btn7_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnDot_clicked();

    void on_btnPlus_clicked();

    void on_btnMinus_clicked();

    void on_btnX_clicked();

    void on_btnDivide_clicked();

    void on_btnModulo_clicked();

    void on_btnPerfectSquare_clicked();

    void on_btnClear_clicked();

    void on_btnDelete_clicked();

    void on_btnEqual_clicked();

    void OnBtnChangeThemeClicked();

private:
    Ui::MainWindow *ui;

private:
    bool isOperator(QChar character);

};
#endif // MAINWINDOW_H
