#ifndef CARDHAND_H
#define CARDHAND_H
#include<card.h>
#include<QString>
#include<QList>
class Cardhand: public QList<Card*>{
public:
    int getValue();
    QString toString();
};
#endif // CARDHAND_H
