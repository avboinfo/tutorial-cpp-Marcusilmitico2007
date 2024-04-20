
/*
BattleField.cpp
Marco Marcucci 3CIN 13/04/2024
*/
//DIM,SHIP,MISS,HIT,VOID
#include<iostream>
using namespace std;
const int  DIM= 10;
const char SHIP = 'X';
const char MISS = '.';
const char HIT = '*';
const char VOID = '-';



//classe è un insime di attribbuti e metodi

class BattleField{

    private:
    char m[10][10];

    public:
        BattleField(){
            for (int  i = 0; i < DIM; i++)
                for (int j = 0; j < DIM; j++)
                    m[i][j] =97 + rand()%26;
        }

        BattleField( char c){
            for (int  i = 0; i < DIM; i++)
                for (int j = 0; j < DIM; j++)
                    m[i][j] =c;   

        }
        char get(int x,int y){
            return m[x][y];
        }
        void put(int x,int y, char c){
            m[x][y]=c;
        }

        void stampa(){
            cout<<"--------------------------------------------------------"<<endl;
            for (int  i = 0; i < DIM; i++){
                for (int j = 0; j < DIM; j++){
                    printf("%c ",m[i][j]);
                    //cout<< m[i][j]<<"\t";
                }
                cout<<endl;
            }
            cout<<"--------------------------------------------------------"<<endl;
        }
        
        void placeshipHorizontal(int len){
            if(len<=0 || len>=DIM) return;
            int x=rand()% DIM;
            int y=rand()% (DIM-len);
            for (int i=0;i<len;i++) m[x][y+i]= SHIP;
        }
        void placeshipVertical(int len){
            if(len<=0 || len>=DIM) return;
            int x=rand()% (DIM-len);
            int y=rand()% DIM;
            for (int i=0;i<len;i++) m[x+i][y]= SHIP;
        }

};



