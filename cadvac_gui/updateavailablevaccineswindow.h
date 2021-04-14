#ifndef UPDATEAVAILABLEVACCINESWINDOW_H
#define UPDATEAVAILABLEVACCINESWINDOW_H
#include "../src/system.h"
#include <string>
#include <QMessageBox>
#include <QMainWindow>

namespace Ui {
class UpdateAvailableVaccinesWindow;
}

class UpdateAvailableVaccinesWindow : public QMainWindow
{
    Q_OBJECT

public:
    System *sys;
    string postName;
    explicit UpdateAvailableVaccinesWindow(QWidget *parent = 0);
    ~UpdateAvailableVaccinesWindow();

    System *getSys() const;
    void setSys(System *value);

private slots:
    void on_updateVaccinesButton_clicked();
    void clearForm();
private:
    Ui::UpdateAvailableVaccinesWindow *ui;
};

#endif // UPDATEAVAILABLEVACCINESWINDOW_H
