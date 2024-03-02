#include <iostream>
#include <cstdlib>
#include <cstime>

class mastermind
{
private:
    int numero_mosse;
    std::string ultima_mossa;
    
    static const int DIM_GIOCATA_VALIDA = 4;
    int mossa_valida[DIM_GIOCATA_VALIDA];
    int codice_segreto[DIM_GIOCATA_VALIDA];


bool sanifica_input(){
    
    
    int j=0;

    if (DIM_GIOCATA_VALIDA!=ultima_mossa.size())
        return false;
    
    
    for (int i = 0; i <ultima_mossa.size(); i++)
    {
        char c =ultima_mossa[i];
        
        if (c>= '0' && c<='9'){
            mossa_valida[j] = c-'0' ;
        }else if(c=='-'){   //il trattino verrà convertito in -1
            mossa_valida[i] = -1;
        }else
            return false;
    
        }
        return true;
    }

    void genera_codice_segreto(){
    srand(time(NULL))
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
        genera_codice_segreto();
    };-

public:
    mastermind(){
       numero_mosse = 0;
       ultima_mossa = "";

    };

    void nuova_giocata(){
        

       do{
        std::cout<< numero_mosse + 1 << ": ";
        std::getline(std::cin, ultima_mossa);
       }while(!sanifica_input());

        numero_mosse++;

    }


    void risultato_mossa(){





    }


};






