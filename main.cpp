#include<carddeck.h>
#include<QTextStream>
#include<QtGui>
#include<QtWidgets/QApplication>
#include<QtWidgets/QMessageBox>
#include<QtWidgets/QInputDialog>

int main(int argc,char* argv[]){
    QApplication app(argc, argv);
    QTextStream cout(stdout);
    Carddeck deck;
    Cardhand hand;
    int handSize, playerScore, progScore;
    cout<<"How many cards in a hand?"<<flush;
    handSize = QInputDialog::getInt(0,QString("getInt()"),
            QString("How many cards in hand?"),1,5);
    QMessageBox::StandardButton sb;
    do{
        hand=deck.deal(handSize);
        cout<<"Here is your hand:"<<endl;
        cout<<hand.toString()<<endl;
        playerScore=hand.getValue();
        cout<<QString("Your score is: %1 points.").arg(playerScore)<<endl;
        hand=deck.deal(handSize);
        progScore=hand.getValue();
        cout<<"Here is my hand:"<<endl;
        cout<<hand.toString()<<endl;
        cout<<QString("My score is: %1 points.").arg(progScore)<<endl;
        cout<<QString("%1 win!").arg(playerScore>progScore?"You":"I")<<endl;
        sb = QMessageBox::question(0, QString("QmessageBox::question()"),QString("Another hand?"),
                QMessageBox::Yes|QMessageBox::No);
    }while(sb==QMessageBox::Yes);
}
