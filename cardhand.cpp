#include<cardhand.h>

int Cardhand::getValue(){
    int total=0;
    for(Card *value: *this){
        total += value->getValue();
    }
    return total;
}

QString Cardhand::toString(){
    QString s;
    for(Card *face: *this){
        s += face->toString() + "\t";
    }
    return s;
}


