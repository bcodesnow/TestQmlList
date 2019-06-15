#ifndef PROVIDERCLASS_H
#define PROVIDERCLASS_H

#include <QVariant>
#include <QVariantList>
#include <QObject>

class ProviderClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantList vl READ vl WRITE setVl NOTIFY vlChanged)

public:
    ProviderClass(QObject *parent = nullptr);

    QVariantList vl(){return myVl;}

    void setVl(QVariantList vl){
      myVl = vl;
      vlChanged(myVl);
    }

signals:
  void vlChanged(QVariantList);

private:
  QVariantList myVl;

};

#endif // PROVIDERCLASS_H
