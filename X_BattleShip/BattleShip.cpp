
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
        campo.placeshipHorizontal(3); //piazziamo delle navi nel costruttore
        campo.placeshipVertical(4);
        campo.placeshipVertical(2);
        campo.placeshipHorizontal(5);
        

    }






   

    void play(){
        //lancia 20 bombe a caso
        mappa.stampa();

        while(true){
            mappa.stampa();
            if( !playHand()) 
                break;
  
        }

        
        campo.stampa();
    }

    bool playHand(){
        cout<<"Inserisci le cordinate di riga e colona(1-"<<DIM<<") in cui sganciare la bomba";
        int x, y;
        cin>>x;
        if(x<=0 ||x>DIM)
           return false; else x--;
        cin>>y;
        if(y==0|| y>DIM)
            return false; else y--;
            
        
        if(campo.get(x,y)==SHIP) {
                mappa.put(x,y,HIT);
                campo.put(x,y,HIT);
            } else mappa.put(x,y,MISS);
            return true;
        }
    
    bool GameOver(){
        
        for (int i = 0; i < DIM; i++) {
            for (int j = 0; j < DIM; j++) {
                if (campo.get(i, j) == SHIP) {
                    return false;
                
            }
        }
        return true;
    }


    }

};


