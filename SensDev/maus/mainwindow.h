#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "core.h"
#include <QMainWindow>
#include <QFile>
#include <QFileInfo>
#include <QList>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include <QTextStream>
#include <QString>

namespace Ui {
class MainWindow;
class Sensor;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_inputSpinBox1_valueChanged(int value);
    void on_inputSpinBox2_valueChanged(int value);
    void open_new_file(const QString & name);
    void actionClose(void);
};

class Sensor : public QMainWindow
{
    Q_OBJECT

public:
    double span;
    double zero;

private:

private slots:
    void calibrate(void);

};

#endif // MAINWINDOW_H
