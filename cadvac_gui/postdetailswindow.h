#ifndef POSTDETAILSWINDOW_H
#define POSTDETAILSWINDOW_H
#include "updateavailablevaccineswindow.h"
#include "updatepostwindow.h"
#include "user.h"
#include "posts.h"
#include "connectdb.h"
#include <iostream>
#include <QLineEdit>
#include <QDateEdit>
#include <QMainWindow>
#include <QMessageBox>
using namespace std;

namespace Ui {
class PostDetailsWindow;
}

class PostDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PostDetailsWindow(QWidget *parent = 0, Posts *posts = 0);
    ~PostDetailsWindow();

    UpdateAvailableVaccinesWindow *updateVaccines;
    UpdatePostWindow *updatePostWindow;
    Posts *post;
    QWidget *parentWindown;
    ConnectDb dataBase;

private slots:
    void on_updatePostButton_clicked();
    void on_removePostButton_clicked();
    void on_updateNumberVaccinesButton_clicked();
    void clearForm();
private:
    Ui::PostDetailsWindow *ui;
};

#endif // POSTDETAILSWINDOW_H
