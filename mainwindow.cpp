#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_tiep_clicked()
{
    ui->lineEdit_A->setText("");
    ui->lineEdit_B->setText("");
    ui->lineEdit_C->setText("");
    ui->lineEdit_max->setText("");
}

void MainWindow::on_pushButton_thoat_clicked()
{
    QMessageBox a;
            a.setWindowTitle("Close");
            a.setText("Ban co muon close khong?");
            a.setInformativeText("Nhan Yes de close");
            a.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            a.setDefaultButton(QMessageBox::No);
            a.setIcon(QMessageBox::Warning);
            int ketQua = a.exec();
            switch (ketQua) {
                case QMessageBox::Yes:
                close();
                break;
            case QMessageBox::No:
                break;
            }


}

void MainWindow::on_pushButton_thucHien_clicked()
{
    int max;
    int a = ui->lineEdit_A->text().toInt();
    int b = ui->lineEdit_B->text().toInt();
    int c = ui->lineEdit_C->text().toInt();
    max = a;
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    ui->lineEdit_max->setText(QString::number(max));
}
