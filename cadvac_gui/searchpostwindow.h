#ifndef SEARCHPOSTWINDOW_H
#define SEARCHPOSTWINDOW_H
#include "postdetailswindow.h"
#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QDate>
#include "../src/system.h"
#include <iostream>
using namespace std;
namespace Ui {
class SearchPostWindow;
}

class SearchPostWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    PostDetailsWindow postDetailsWindow;
    explicit SearchPostWindow(QWidget *parent = 0);
    ~SearchPostWindow();

private slots:


    void on_searchPostButton_clicked();
    void clearForm();
private:
    Ui::SearchPostWindow *ui;
};

#endif // SEARCHPOSTWINDOW_H
