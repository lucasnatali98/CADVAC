#ifndef UPDATEPOSTWINDOW_H
#define UPDATEPOSTWINDOW_H
#include "user.h"
#include "posts.h"
#include "connectdb.h"
#include <iostream>
#include <QLineEdit>
#include <QDateEdit>
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class UpdatePostWindow;
}

class UpdatePostWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdatePostWindow(QWidget *parent = nullptr, Posts *searchPost = 0);
    ~UpdatePostWindow();

    QWidget *parentWindown;
    Posts *post;
    ConnectDb dataBase;

private slots:
    void on_pushButton_clicked();

private:
    Ui::UpdatePostWindow *ui;
    void clearForm();
};

#endif // UPDATEPOSTWINDOW_H
