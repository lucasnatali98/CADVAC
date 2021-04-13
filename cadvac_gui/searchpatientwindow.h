#ifndef SEARCHPATIENTWINDOW_H
#define SEARCHPATIENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchPatientWindow;
}

class SearchPatientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchPatientWindow(QWidget *parent = 0);
    ~SearchPatientWindow();

private slots:
    void on_searchPatientButton_clicked();

private:
    Ui::SearchPatientWindow *ui;
};

#endif // SEARCHPATIENTWINDOW_H
