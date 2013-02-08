#include "mainwindow.h"
#include "core.h"
#include <QApplication>
#include <QFile>
#include <QFileInfo>
#include <QList>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Sensor sensor1;
    double max_val, min_val, bit_resolution;
    double increments, bit_calc, system;
    int safe_bits, no_of_bits;

    w.show();
    system = 2;
    bit_resolution = 0.00001;
    max_val = 100;
    min_val = 0;
    //calculate required bits
    increments = (max_val - min_val)/bit_resolution;
    bit_calc = log(increments)/log(system);

    no_of_bits = bit_calc + 0.5;
    safe_bits = no_of_bits + 1;
    //sensor1.write_resolution(safe_bits);

    return a.exec();
}
