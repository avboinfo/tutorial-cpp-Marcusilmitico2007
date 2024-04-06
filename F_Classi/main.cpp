#include<iostream>
#include "Coda.cpp"
using namespace std;

int main(){

    Coda c= Coda(1000);

    c.stampa();
    c.enter(1);
    c.enter(2);
    c.enter(3);
    c.exit();
    c.enter(4);
    c.stampa();
    

}