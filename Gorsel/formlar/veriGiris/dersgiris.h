#ifndef DERSGIRIS_H
#define DERSGIRIS_H
#include<Siniflar/dersler.h>
#include <QDialog>

namespace Ui {
class dersGiris;
}

class dersGiris : public QDialog
{
    Q_OBJECT

public:
    explicit dersGiris(QWidget *parent = nullptr);
    ~dersGiris();

    bool degisiklikVar() const;
    void setDegisiklikVar(bool degisiklikVar);

    Dersler::ptr ders() const;
    void setDers(const Dersler::ptr &ders);

public slots:
    void GorselDegisti();
    void reject() override;

private slots:
    void on_pushButton_Ekle_clicked();

private:
    Ui::dersGiris *ui;
    Dersler::ptr _ders;

    void GorselGuncelle();
    void VeriGuncelle();
    bool _degisiklikVar;
};

#endif // DERSGIRIS_H
