#include<carddeck.h>
#include<cstdlib>
int const SUIT_TOTAL = 4;
int const FACE_TOTAL = 13;
Carddeck::Carddeck(){
    for(int a=0; a<SUIT_TOTAL; a++){
        for(int b=0;b<FACE_TOTAL; b++){
            this->append(new Card(b,a));
        }
    }
}

void Carddeck::restoreDeck(){
    qDeleteAll(this->begin(),this->end());
    Carddeck();
}

int Carddeck::getCardLeft(){
    return this->size();
}

QString Carddeck::toString(){
    QString s;
    for(Card *face: *this){
        s += face->toString() + "\t";
    }
    return s;
}

Cardhand Carddeck::deal(int handSize){
    Cardhand *hand = new Cardhand();
    for(int i=0;i<handSize;i++){
        srand(time(0));
        int r = rand()%this->size();
        *hand<<this->at(r);
        this->removeAt(r);
    }
    return *hand;
}
