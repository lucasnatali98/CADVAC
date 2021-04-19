#ifndef UPDATEAVAILABLEVACCINESWINDOW_H
#define UPDATEAVAILABLEVACCINESWINDOW_H
#include "posts.h"
#include "connectdb.h"
#include <iostream>
#include <QLineEdit>
#include <QDateEdit>
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class UpdateAvailableVaccinesWindow;
}

class UpdateAvailableVaccinesWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateAvailableVaccinesWindow(QWidget *parent = 0, Posts *searchPost = 0);
    ~UpdateAvailableVaccinesWindow();

    Posts *post;
    QWidget *parentWindown;
    ConnectDb dataBase;

private slots:
    void on_updateVaccinesButton_clicked();
    void clearForm();
private:
    Ui::UpdateAvailableVaccinesWindow *ui;
};

#endif // UPDATEAVAILABLEVACCINESWINDOW_H
