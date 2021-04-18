#ifndef VACCINESDOSESTAKENWINDOW_H
#define VACCINESDOSESTAKENWINDOW_H

#include <QDialog>
#include "../src/system.h"

namespace Ui {
class VaccinesDosesTakenWindow;
}

class VaccinesDosesTakenWindow : public QDialog
{
    Q_OBJECT

public:
    System *sys;
    string cpf_aux;
    explicit VaccinesDosesTakenWindow(QWidget *parent = 0);
    ~VaccinesDosesTakenWindow();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::VaccinesDosesTakenWindow *ui;
};

#endif // VACCINESDOSESTAKENWINDOW_H
