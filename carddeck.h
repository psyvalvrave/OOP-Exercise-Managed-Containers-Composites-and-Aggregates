#ifndef CARDDECK_H
#define CARDDECK_H
#include<QString>
#include<card.h>
#include<QList>
#include<cardhand.h>
class Carddeck: public QList<Card*>{
public:
    Carddeck();
    Cardhand deal(int handSize);
    QString toString();
    int getCardLeft();
    void restoreDeck();
};
#endif // CARDDECK_H
