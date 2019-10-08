#ifndef SECADMINLOGIN_H
#define SECADMINLOGIN_H

#include <QDialog>

namespace Ui {
class secAdminLogin;
}

class secAdminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit secAdminLogin(QWidget *parent = nullptr);
    ~secAdminLogin();

private slots:
    void on_backLogin_clicked();

private:
    Ui::secAdminLogin *ui;
};

#endif // SECADMINLOGIN_H
