#include "consumerclass.h"
#include <QDebug>
#include <QObject>
#include <QVariantList>
#include <QVariant>
#include <listitemclass.h>

ConsumerClass::ConsumerClass(QObject *parent) : QObject(parent)
{

}

void ConsumerClass::show_what_you_got()
{
    for (int i = 0; i < myVl.size(); i++)
    {
        ListItemClass* item = qobject_cast<ListItemClass *>(myVl.at(i).value<QObject *>());
        qDebug()<<"Listitem - "<<i<<" X - "<<item->getX()<<" T - "<<item->getT();
    }

}
