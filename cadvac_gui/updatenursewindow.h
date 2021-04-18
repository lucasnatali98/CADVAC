#ifndef UPDATENURSEWINDOW_H
#define UPDATENURSEWINDOW_H
#include <string>

#include <QMainWindow>
#include <QMessageBox>
#include "../src/system.h"
using namespace std;
namespace Ui {
class UpdateNurseWindow;
}

class UpdateNurseWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    string cpf_aux;
    explicit UpdateNurseWindow(QWidget *parent = 0);
    ~UpdateNurseWindow();

private slots:
    void on_updateNurseButton_clicked();

private:
    Ui::UpdateNurseWindow *ui;
};

#endif // UPDATENURSEWINDOW_H
