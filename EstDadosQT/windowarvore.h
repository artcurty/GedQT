#ifndef WINDOWARVORE_H
#define WINDOWARVORE_H

#include <QDialog>

namespace Ui {
class windowarvore;
}

class windowarvore : public QDialog
{
    Q_OBJECT

public:
    explicit windowarvore(QWidget *parent = 0);
    ~windowarvore();

private slots:
    void on_inserir_clicked();

    void on_inorder_clicked();

    void on_busca_clicked();

private:
    Ui::windowarvore *ui;
};

#endif // WINDOWARVORE_H
