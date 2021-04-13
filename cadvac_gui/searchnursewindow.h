#ifndef SEARCHNURSEWINDOW_H
#define SEARCHNURSEWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchNurseWindow;
}

class SearchNurseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchNurseWindow(QWidget *parent = 0);
    ~SearchNurseWindow();

private slots:
    void on_searchNurseButton_clicked();

private:
    Ui::SearchNurseWindow *ui;
};

#endif // SEARCHNURSEWINDOW_H
