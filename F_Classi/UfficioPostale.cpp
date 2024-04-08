#include<iostream>
#include"Coda.cpp"
using namespace std;


class UfficioPostale{
    private:
        string nome:
        Coda cR,cS,cF;
        int nR,nS,nF;


    public:
        UfficioPostale( string nome){
            this-> nome=nome;
            cR=Coda("ricezzione",1000);
            cS=Coda("spedizione",1000);
            cF=Coda("finanziari",1000);
            nR= nSn = nF = 100;
    }



    void nuovoCliente(char servizzio){
        switch (servizzio){
        case 'r':
            cR.enter( nR++);
            break;
        case 's':
            cS.enter( nS++);
            break;
        case 'f':
            cF.enter( nF++);
            break;
        
        default:
            cout<<"Questo servizzio te lo fai da solo!!!!!!!!"<<endl;
        }
    }


    int chiamaCliente(char servizzio){
        switch (servizzio)
        case 'r':
            return cR.exit( nR++);
            
        case 's':
            return cS.exit( nS++);
            
        case 'f':
            return cF.exit( nF++);
            
        
        default:
            cout<<"Questo servizzio non è previsto!!!!!!!!"<<endl;
        
        }
    }

    void stampaTabellone() {

        cout<<"Tabello dell'Ufficio Postale"<<endl;


        cR.stampa();
        cS.stampa();
        cF.stampa();

    };