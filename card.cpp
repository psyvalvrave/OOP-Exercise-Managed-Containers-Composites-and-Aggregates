#include<card.h>

QString Card::toString(){
    return QString(s_SUits[m_SuitNbr]+'-'+s_Faces.at(m_FceNbr));
}
QString Card::getFace(){
    return s_Faces.at(m_FceNbr);
}
QString Card::getSuit(){
    return s_SUits[m_SuitNbr];
}
int Card::getValue(){
    switch(m_FceNbr){
    case 0: return 4;
        break;
    case 10: return 1;
        break;
    case 11: return 2;
        break;
    case 12: return 3;
        break;
    default: return 0;
        break;
    }
}
