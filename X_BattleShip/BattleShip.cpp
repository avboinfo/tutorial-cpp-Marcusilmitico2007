
/*
Marco Marcucci 3CIN 20/04/20224
BattleShip

*/


#include<iostream>
#include "BattleField.cpp"

using namespace std;


class BattleShip{

    private:
    BattleField mappa;
    BattleField campo;



    public: 
    BattleShip(){
        srand(time(NULL));
        mappa = BattleField( VOID );
        campo = BattleField( VOID );
        campo.placeshipHorizontal(3);
        campo.placeshipVertical(4);
        campo.placeshipVertical(2);
        campo.placeshipHorizontal(5);
        

    }






   

    void play(){
        //lancia 20 bombe a caso
        for (int i = 0; i < 20; i++)
        {
            int x=rand()%DIM;
            int y=rand()%DIM;
            if(campo.get(x,y)==HIT) continue; 
            if(campo.get(x,y)==SHIP) {
                mappa.put(x,y,HIT);
                campo.put(x,y,HIT);
            } else mappa.put(x,y,MISS);
        }
        

        mappa.stampa();
        campo.stampa();
        
    }
};

