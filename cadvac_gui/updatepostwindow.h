#ifndef UPDATEPOSTWINDOW_H
#define UPDATEPOSTWINDOW_H
#include "../src/system.h"
#include <QMainWindow>
#include <QMessageBox>
using namespace std;
namespace Ui {
class UpdatePostWindow;
}

class UpdatePostWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    string postName_aux;
    explicit UpdatePostWindow(QWidget *parent = 0);
    ~UpdatePostWindow();

private slots:
    void on_updatePostButton_clicked();

private:
    Ui::UpdatePostWindow *ui;
};

#endif // UPDATEPOSTWINDOW_H
