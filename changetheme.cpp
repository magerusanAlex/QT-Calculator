#include "changetheme.h"
#include "ui_changetheme.h"
#include "mainwindow.h"

void ChangeTheme::CreateConnections()
{
    connect(ui->btnApplyTheme, SIGNAL(clicked()),
            this, SLOT(OnBtnApplyThemeClicked()));

    connect(ui->btnCacelTheme, SIGNAL(clicked()),
            this, SLOT(OnBtnCancelThemeClicked()));
}

void ChangeTheme::SetIcon()
{
    QPixmap pix = QPixmap("qrc:/Icons/58616-emoticon-angry-anger-emojis-sticker-emoji.png");
    setWindowIcon(pix);
}

ChangeTheme::ChangeTheme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTheme)
{
    ui->setupUi(this);
    setWindowTitle("Theme Changer");

    CreateConnections();

    SetIcon();
}

ChangeTheme::~ChangeTheme()
{
    delete ui;
}

void ChangeTheme::SetDarkTheme(QObject* parent)
{
    MainWindow* realParent = (MainWindow*)parent;
    realParent->setStyleSheet("color:white;"
                          "font-weight: bold;"
                          "background-color:#000066;");

    realParent->GetBtn0()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn1()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn2()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn3()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn4()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn5()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn6()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn7()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn8()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtn9()->setStyleSheet("background-color:#19194d;"
                                     "border: 2px solid #331a00;"
                                     "border-radius: 8px;"
                                     "color: white;"
                                     "text-weight:bold;");

    realParent->GetBtnClear()->setStyleSheet("border: 2px solid #331a00;"
                                         "background-color: #060613;"
                                         "border-radius: 8px;"
                                         "color:white;");

    realParent->GetBtnDelete()->setStyleSheet("border: 2px solid #331a00;"
                                          "background-color: #060613;"
                                          "border-radius: 8px;"
                                          "color:white;");

    realParent->GetBtnX()->setStyleSheet("border: 2px solid #331a00;"
                    "background-color: #003399;"
                     "border-radius: 8px");

    realParent->GetBtnPlus()->setStyleSheet("border: 2px solid #331a00;"
                                        "background-color: #003399;"
                                         "border-radius: 8px");

    realParent->GetBtnMinus()->setStyleSheet("border: 2px solid #331a00;"
                                         "background-color: #003399;"
                                          "border-radius: 8px");

    realParent->GetBtnDivide()->setStyleSheet("border: 2px solid #331a00;"
                                          "background-color: #003399;"
                                           "border-radius: 8px");

    realParent->GetBtnModulo()->setStyleSheet("border: 2px solid #331a00;"
                                          "background-color: #003399;"
                                           "border-radius: 8px");

    realParent->GetBtnChangeTheme()->setStyleSheet("border: 2px solid #331a00;"
                                               "background-color: #003399;"
                                                "border-radius: 8px");

    realParent->GetBtnDot()->setStyleSheet("border: 2px solid #331a00;"
                                       "background-color: #003399;"
                                        "border-radius: 8px");

    realParent->GetBtnPerfectSquare()->setStyleSheet("border: 2px solid #331a00;"
                                                 "background-color: #003399;"
                                                  "border-radius: 8px");

    realParent->GetBtnEqual()->setStyleSheet("border: 2px solid #331a00;"
                                         "background-color: #000000;"
                                          "border-radius: 8px");

    realParent->GetLineEdit()->setStyleSheet("border: 2px solid #331a00;"
                                         "background-color: #000000;"
                                          "border-radius: 8px");

    realParent->update();
}

void ChangeTheme::MessageLabelColor(QPalette prevColor)
{
    QPalette nextColor = this->palette();

    if (nextColor != prevColor)
        if (ui->cBox->currentText() == "Dark ")
            ui->lblMsg->setStyleSheet("color:white");
        else
            ui->lblMsg->setStyleSheet("color:dark");

    ui->lblMsg->setText("The theme has been changed to " + ui->cBox->currentText());
}

void ChangeTheme::OnBtnApplyThemeClicked()
{
    QString text = ui->cBox->currentText();
    MainWindow* parent = (MainWindow*)this->parent();
    QPalette prevColor = this->palette();

    if (text == "Dark ")
        SetDarkTheme(this->parent());

    else if (text == "Light")
        parent->SetStyles();

    MessageLabelColor(prevColor);
}

void ChangeTheme::OnBtnCancelThemeClicked()
{
    close();
}

