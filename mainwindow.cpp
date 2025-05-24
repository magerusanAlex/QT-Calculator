#include "mainwindow.h"
#include "qurl.h"
#include "ui_mainwindow.h"

void MainWindow::SetStyles()
{
    ui->lineEdit->setStyleSheet("border: 2px solid #331a00;"
                                "background-color: white;"
                                 "border-radius: 8px");

    ui->btn0->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn1->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn2->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn3->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn4->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn5->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn6->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn7->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn8->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");
    ui->btn9->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #c2c2a3;"
                             "border-radius: 8px");

    ui->btnDelete->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #664400;"
                            "border-radius: 8px");
    ui->btnClear->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #664400;"
                            "border-radius: 8px");

    ui->btnDivide->setStyleSheet("border: 2px solid #331a00;"
                                 "background-color: #86592d;"
                                  "border-radius: 8px");
    ui->btnPlus->setStyleSheet("border: 2px solid #331a00;"
                               "background-color: #86592d;"
                                "border-radius: 8px");
    ui->btnMinus->setStyleSheet("border: 2px solid #331a00;"
                                "background-color: #86592d;"
                                 "border-radius: 8px");
    ui->btnModulo->setStyleSheet("border: 2px solid #331a00;"
                                 "background-color: #86592d;"
                                  "border-radius: 8px");
    ui->btnPerfectSquare->setStyleSheet("border: 2px solid #331a00;"
                                        "background-color: #86592d;"
                                         "border-radius: 8px");
    ui->btnDot->setStyleSheet("border: 2px solid #331a00;"
                              "background-color: #86592d;"
                               "border-radius: 8px");
    ui->btnX->setStyleSheet("border: 2px solid #331a00;"
                            "background-color: #86592d;"
                             "border-radius: 8px");
    ui->btnEqual->setStyleSheet("border: 2px solid #331a00;"
                              "background-color: #86592d;"
                               "border-radius: 8px");

    ui->btnChangeTheme->setStyleSheet("border: 2px solid #331a00;"
                                      "background-color: #86592d;"
                                       "border-radius: 8px");

    this->setStyleSheet("background-color:white");
}

void MainWindow::MakeConnections()
{
    connect(ui->btnChangeTheme, SIGNAL(clicked()),
            this, SLOT(OnBtnChangeThemeClicked()));
}

void MainWindow::SetIcon()
{
    QPixmap pix = QPixmap("qrc:/Icons/icon.png");
    setWindowIcon(pix);
}

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SetStyles();

    MakeConnections();

    SetIcon();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnBtnChangeThemeClicked() {
    ChangeTheme *dialog = new ChangeTheme(this);
    dialog->show();
}

QLineEdit* MainWindow::GetLineEdit() {
    return ui->lineEdit;
}

QPushButton* MainWindow::GetBtn0() {
    return ui->btn0;
}

QPushButton* MainWindow::GetBtn1() {
    return ui->btn1;
}

QPushButton* MainWindow::GetBtn2() {
    return ui->btn2;
}

QPushButton* MainWindow::GetBtn3() {
    return ui->btn3;
}

QPushButton* MainWindow::GetBtn4() {
    return ui->btn4;
}

QPushButton* MainWindow::GetBtn5() {
    return ui->btn5;
}

QPushButton* MainWindow::GetBtn6() {
    return ui->btn6;
}

QPushButton* MainWindow::GetBtn7() {
    return ui->btn7;
}

QPushButton* MainWindow::GetBtn8() {
    return ui->btn8;
}

QPushButton* MainWindow::GetBtn9() {
    return ui->btn9;
}

QPushButton* MainWindow::GetBtnPlus() {
    return ui->btnPlus;
}

QPushButton* MainWindow::GetBtnEqual() {
    return ui->btnEqual;
}

QPushButton* MainWindow::GetBtnMinus() {
    return ui->btnMinus;
}

QPushButton* MainWindow::GetBtnDivide() {
    return ui->btnDivide;
}

QPushButton* MainWindow::GetBtnDot() {
    return ui->btnDot;
}

QPushButton* MainWindow::GetBtnClear() {
    return ui->btnClear;
}

QPushButton* MainWindow::GetBtnDelete() {
    return ui->btnDelete;
}

QPushButton* MainWindow::GetBtnModulo() {
    return ui->btnModulo;
}

QPushButton* MainWindow::GetBtnPerfectSquare() {
    return ui->btnPerfectSquare;
}

QPushButton* MainWindow::GetBtnX() {
    return ui->btnX;
}

QPushButton* MainWindow::GetBtnChangeTheme() {
    return ui->btnChangeTheme;
}

void MainWindow::on_btn0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void MainWindow::on_btn1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void MainWindow::on_btn2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void MainWindow::on_btn3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void MainWindow::on_btn4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void MainWindow::on_btn5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void MainWindow::on_btn6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void MainWindow::on_btn7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void MainWindow::on_btn8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void MainWindow::on_btn9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}

void MainWindow::on_btnDot_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ".");
}

void MainWindow::on_btnPlus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " + ");
}

void MainWindow::on_btnMinus_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " - ");
}

void MainWindow::on_btnX_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " X ");
}

void MainWindow::on_btnDivide_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " / ");
}

void MainWindow::on_btnModulo_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + " % ");
}

void MainWindow::on_btnPerfectSquare_clicked()
{
    unsigned long long number =  ui->lineEdit->text().toLongLong();

    if (number <= ULLONG_MAX / number) {
        number *= number;
        ui->lineEdit->setText(QString::number(number)); // 8733086111712066817
                                                        // 9223372036854775807
    }
    else {
        QMessageBox::critical(this, "Number too big", "The number surpassed the limit of a long long variable");
        ui->lineEdit->setText("");
        ui->lineEdit->setFocus();
    }
}

void MainWindow::on_btnClear_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setFocus();
}

void MainWindow::on_btnDelete_clicked()
{
    QString newExpression;
    QString expression = ui->lineEdit->text();

    for (int i = 0; i < expression.size() - 1; ++i)
        newExpression += expression[i];

    ui->lineEdit->setText(newExpression);
    ui->lineEdit->setFocus();
}

void MainWindow::on_btnEqual_clicked()
{
    QString numberOne, numberTwo;
    QString aux = ui->lineEdit->text();
    int index = 0;

    if (!aux.contains('.')) {
        long long numberOneValue, numberTwoValue;
        for (int i = 0; !isOperator(aux[i]); ++i)
            if (isOperator(aux[i + 1]))
                index = i + 1;
            else if (aux[i].isDigit())
                numberOne += aux[i];

        for (int i = index + 1; i < aux.size(); ++i)
            if (aux[i].isDigit())
                numberTwo += aux[i];


        numberOneValue =  numberOne.toLongLong();
        numberTwoValue = numberTwo.toLongLong();

        int calculation = aux.at(index).toLatin1(); // Gets the character at 'index' position ascii code

        switch (calculation) {
            case '-' :
                ui->lineEdit->setText(QString::number(numberOneValue - numberTwoValue));
            break;

            case '+' :
                ui->lineEdit->setText(QString::number(numberOneValue + numberTwoValue));
            break;

            case 'X' :
                ui->lineEdit->setText(QString::number(numberOneValue * numberTwoValue));
            break;

            case '/' :
                ui->lineEdit->setText(QString::number(numberOneValue / numberTwoValue));
            break;

            case '%' :
                ui->lineEdit->setText(QString::number(numberOneValue % numberTwoValue));
            break;

            default: ui->lineEdit->setText("Try again !");
            break;

        }
    }
//    else {
//        double numberOneValue, numberTwoValue;
//        for (int i = 0; !isOperator(aux[i]); ++i)
//            if (isOperator(aux[i + 1]))
//                index = i + 1;
//            else if (aux[i].isDigit())
//                numberOne += aux[i];

//        for (int i = index + 1; i < aux.size(); ++i)
//            if (aux[i].isDigit())
//                numberTwo += aux[i];


//        numberOneValue =  numberOne.toDouble();
//        numberTwoValue = numberTwo.toDouble();


//        int calculation = aux.at(index).toLatin1(); // Gets the character at 'index' position ascii code

//        switch (calculation) {
//            case '-' :
//                ui->lineEdit->setText(QString::number(numberOneValue - numberTwoValue));
//            break;

//            case '+' :
//                ui->lineEdit->setText(QString::number(numberOneValue + numberTwoValue));
//            break;

//            case 'X' :
//                ui->lineEdit->setText(QString::number(numberOneValue * numberTwoValue));
//            break;

//            case '/' :
//                ui->lineEdit->setText(QString::number(numberOneValue / numberTwoValue));
//            break;

//            default: ui->lineEdit->setText("Try again !");
//            break;
//       }
//    }
}

bool MainWindow::isOperator(QChar character) {
    if (character.isDigit() == true || character.isSpace() == true || character == '.')
        return false;
    return true;
}

