#ifndef SEARCHPOSTWINDOW_H
#define SEARCHPOSTWINDOW_H
#include "postdetailswindow.h"
#include "user.h"
#include "posts.h"
#include "connectdb.h"
#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QDate>
#include <iostream>
using namespace std;

namespace Ui {
class SearchPostWindow;
}

class SearchPostWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchPostWindow(QWidget *parent = 0, User *currentUser = 0);
    ~SearchPostWindow();

    PostDetailsWindow *postDetailsWindow;
    User *currentUser;
    Posts *searchPost = Posts::generatePost();
    ConnectDb dataBase;

private slots:
    void on_searchPostButton_clicked();
    void clearForm();
private:
    Ui::SearchPostWindow *ui;
};

#endif // SEARCHPOSTWINDOW_H
