#ifndef SEARCHNURSEWINDOW_H
#define SEARCHNURSEWINDOW_H
#include "nursedetailswindow.h"
#include <QMainWindow>
#include <QString>
#include <QDate>
#include "../src/system.h"
#include <iostream>
using namespace std;
namespace Ui {
class SearchNurseWindow;
}

class SearchNurseWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    NurseDetailsWindow nurseDetailsWindow;
    explicit SearchNurseWindow(QWidget *parent = 0);
    ~SearchNurseWindow();

private slots:
    void on_searchNurseButton_clicked();

private:
    Ui::SearchNurseWindow *ui;
};

#endif // SEARCHNURSEWINDOW_H
