#ifndef WINDOWLISTA_H
#define WINDOWLISTA_H

#include <QDialog>

namespace Ui {
class windowlista;
}

class windowlista : public QDialog
{
    Q_OBJECT

public:
    explicit windowlista(QWidget *parent = 0);
    ~windowlista();

private slots:
    void on_pushButton_2_clicked();

    void on_InsertFront_clicked();

    void on_insertAfter_clicked();

    void on_insertN_clicked();

    void on_removeN_clicked();

    void on_removeAfter_clicked();

    void on_removeFront_clicked();

private:
    Ui::windowlista *ui;
};

#endif // WINDOWLISTA_H
