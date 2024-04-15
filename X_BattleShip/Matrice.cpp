
/*
Matrice.cpp
Marco Marcucci 3CIN 13/04/2024
*/

#include<iostream>
using namespace std;
const int  DIM= 10;

//classe è un insime di attribbuti e metodi

class Matrice{

    private:
    char m[10][10];

    public:
        Matrice(){
            for (int  i = 0; i < DIM; i++)
                for (int j = 0; j < DIM; j++)
                    m[i][j] =97 + rand()%26;
        }

        Matrice( char c){
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
        void bomb{
            int x=rand()%DIM;
            int y=rand()%DIM;
            m[][]='*';
        }

        void placeshipHorizontal(int len){
            if(len<=0 || len>=DIM) return;
            int x=rand()% DIM;
            int y=rand()% (DIM-len);
            for (int i=0;i<len;i++) m[x][y+i]= 'O';
        }
        void placeshipVertical(int len){
            if(len<=0 || len>=DIM) return;
            int x=rand()% (DIM-len);
            int y=rand()% DIM;
            for (int i=0;i<len;i++) m[x+i][y]= 'O';
        }

};



int main() {

    srand(time(NULL));
    Matrice mappa = Matrice( '-' );
    Matrice campo = Matrice();//m1.stampa();
    m.stampa
    campo.placeshipHorizontal(3);
    campo.placeshipVertical(4);
    campo.placeshipVertical(1);
    campo.placeshipHorizontal(1);


    //lancia 20 bombe a caso
    for (int i = 0; i < 20; i++)
    {
        int x=rand()%DIM;
        int y=rand()%DIM;
        if(campo.get(x,y) =='O')mappa.put(x,y,'*');
    }
    

    mappa.stampa();
    campo.stampa();
    

}

