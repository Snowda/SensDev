#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "core.h"
#include <QApplication>
#include <QFile>
#include <QFileInfo>
#include <QList>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include <QTextStream>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_inputSpinBox1_valueChanged(int value)
 {
     //ui.outputWidget->setText(QString::number(value + ui.inputSpinBox2->value()));
 }

void MainWindow::on_inputSpinBox2_valueChanged(int value)
{
    //ui.outputWidget->setText(QString::number(value + ui->textEdit->value()));
}

void MainWindow::open_new_file(const QString & name){
    QFile file(name);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        //process_line(line);
    }

}

void MainWindow::actionClose(){
    MainWindow::~MainWindow();
}

void Sensor::calibrate(){

}
