#ifndef CONSUMERCLASS_H
#define CONSUMERCLASS_H

#include <QVariant>
#include <QVariantList>
#include <QObject>

class ConsumerClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantList vl READ vl WRITE setVl NOTIFY vlChanged)

public:
    ConsumerClass(QObject *parent = nullptr);

    QVariantList vl(){return myVl;}

    void setVl(QVariantList vl){
      myVl = vl;
      vlChanged(myVl);
    }

    Q_INVOKABLE void show_what_you_got();

signals:
    void vlChanged(QVariantList);

private:
  QVariantList myVl;

};

#endif // CONSUMERCLASS_H
