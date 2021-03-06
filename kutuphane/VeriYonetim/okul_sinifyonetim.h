#ifndef OKUL_SINIFYONETIM_H
#define OKUL_SINIFYONETIM_H
#include "Siniflar/okul_sinif.h"
#include "veriyonetim.h"
#include <QDataStream>
#include <QObject>

class KUTUPHANE_EXPORT Okul_sinifyonetim : public QObject,
                                           public Veriyonetim<Okul_sinif> {
  Q_OBJECT
public:
  explicit Okul_sinifyonetim(QObject *parent = nullptr);

signals:
  void Eklendi(Pointer ptr);
  void Silindi(Pointer ptr);
  void Degisti(Pointer eski, Pointer yeni);
};

QDataStream & operator << (QDataStream &dosya , const Okul_sinif::ptr &Okul_sinif);
QDataStream & operator >> (QDataStream &dosya , Okul_sinif::ptr &Okul_sinif);

#endif // OKUL_SINIFYONETIM_H
