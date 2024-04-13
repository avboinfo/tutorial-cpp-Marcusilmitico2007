
/*
Matrice.cpp
Marco Marcucci 3CIN 13/04/2024
*/

#include<iostream>
using namespace std;
//classe è un insime di attribbuti e metodi

class Matrice{

    private:
        int m[10][10];


    public:
        Matrice(int n){

            for (int  i = 0; i < 10; i++)
                for (int j = 0; j < 10; j++)
                    m[i][j] =n;   

        }

        void stampa(){
            cout<<"--------------------------------------------------------"<<endl;
            for (int  i = 0; i < 10; i++){
                for (int j = 0; j < 10; j++){
                    cout<< m[i][j]<<"\t";
                }
                cout<<endl;
            }
            cout<<"--------------------------------------------------------"<<endl;
        }


};



int main() {

    Matrice m1 = Matrice( 3 );
    m1.stampa();

}

