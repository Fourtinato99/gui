#include "git.h"
#include "ui_git.h"

git::git(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::git)
{
    ui->setupUi(this);
}

git::~git()
{
    delete ui;
}


void git::on_click_clicked()
{
    ui->label->setText("clicked");
}

