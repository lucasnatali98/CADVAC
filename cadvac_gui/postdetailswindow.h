#ifndef POSTDETAILSWINDOW_H
#define POSTDETAILSWINDOW_H
#include <iostream>
#include "../src/system.h"
#include "updateavailablevaccineswindow.h"
#include "updatepostwindow.h"
#include <QLineEdit>
#include <QMessageBox>
using namespace std;
#include <QMainWindow>

namespace Ui {
class PostDetailsWindow;
}

class PostDetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    UpdateAvailableVaccinesWindow updateVaccines;
    UpdatePostWindow updatePost;
    explicit PostDetailsWindow(QWidget *parent = 0);
    ~PostDetailsWindow();
    QLineEdit *getAddressLineEdit();
    QLineEdit *getPostNameLineEdit();
    QLineEdit *getVaccinesLineEdit();

    System *getSys() const;
    void setSys(System *value);

private slots:
    void on_updatePostButton_clicked();

    void on_removePostButton_clicked();

    void on_updateNumberVaccinesButton_clicked();
    void clearForm();
private:
    Ui::PostDetailsWindow *ui;
};

#endif // POSTDETAILSWINDOW_H
