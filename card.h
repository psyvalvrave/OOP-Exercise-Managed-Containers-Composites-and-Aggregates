#ifndef CARD_H
#define CARD_H
#include<QString>
#include<QStringList>
class Card{
public:
    Card(int faceNbr, int suitNbr):m_FceNbr(faceNbr),m_SuitNbr(suitNbr){}
    QString toString();
    QString getFace();
    QString getSuit();
    int getValue();
private:
    int m_FceNbr;
    int m_SuitNbr;
    QStringList s_Faces = QStringList()<<"A"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<
                                         "9"<<"10"<<"J"<<"Q"<<"K";
    QStringList s_SUits = QStringList()<<"Diamond"<<"Spades"<<"Heart"<<"Club";
};
#endif // CARD_H
