#ifndef GIT_H
#define GIT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class git; }
QT_END_NAMESPACE

class git : public QMainWindow
{
    Q_OBJECT

public:
    git(QWidget *parent = nullptr);
    ~git();

private slots:
    void on_click_clicked();

private:
    Ui::git *ui;
};
#endif // GIT_H
