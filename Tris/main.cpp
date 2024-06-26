#include <iostream>

using namespace std;
class Tris
{
public:
    int griglia[3][3];

    void reset_tabella()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                griglia[i][j] = 0;
            }
        }
    }
    
    void stampa_griglia()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout <<"|"<< griglia[i][j] <<"|"<<"\t";
            }
            cout << endl;
        }
    }
bool giocatore_uno(int x, int y)
    {
        if (x > 2 || x < 0)
            return false;

        if (y > 2 || y < 0)
            return false;

        if (griglia[x][y] == 1 || griglia[x][y] == 2)
            return false;

        griglia[x][y] = 1;
        return true;
    }

    bool giocatore_due(int x, int y)
    {
        if (x > 2 || x < 0)
            return false;

        if (y > 2 || y < 0)
            return false;

        if (griglia[x][y] == 1 || griglia[x][y] == 2)
            return false;

        griglia[x][y] = 2;
        return true;
    }
    int controlla_vincitore()
    {
        int risultato;
        for (int i = 0; i < 3; i++)
        {
            risultato = controlla_colonna(i);
            if (risultato!=0)
                return risultato;
            
            
            risultato = controlla_riga(i);
            if (risultato!=0)
                return risultato;
                
        }
        /*risultato = controlla_diagonali();
        return risultato;*/
        
        
        return controlla_diagonali();
    }
private:
    int controlla_colonna(int col){
        int acc_uno =0;
        int acc_due =0;
        
        
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[i][col];
            if (cella == 1)
            
                acc_uno++;
            else if (cella ==2)
                acc_due++;
            
            
        }
        if (acc_uno ==3)
            return 1;
        if (acc_due ==3)
        
            return 2;
        return 0;  
    }
    int controlla_riga(int riga){
        int acc_uno =0;
        int acc_due =0;
        
        
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[riga][i];
            if (cella == 1)
            
                acc_uno++;
            else if (cella ==2)
                acc_due++;
            
            
        }
        if (acc_uno ==3)
            return 1;
        if (acc_due ==3)
        
            return 2;
        return 0;  
    }
    int controlla_diagonali(){
        int acc_uno =0;
        int acc_due =0;
        int j =0;
    
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[i][j];
            if (cella == 1)
            
                acc_uno++;
            else if (cella ==2)
                acc_due++;
            j++;
            
        }
        if (acc_uno ==3)
            return 1;
        if (acc_due ==3)
            return 2;
        
        j = 2;
        acc_due=0;
        acc_uno=0;
        
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[i][2-i];
            if (cella == 1)
            
                acc_uno++;
            else if (cella ==2)
                acc_due++;
            j--;
            
        }
        if (acc_uno ==3)
            return 1;
        if (acc_due ==3)
            return 2;
        


        return 0;
        
        
    }
    
    
};

int main(int argc, char const *argv[])
{
    Tris myTris;

    myTris.reset_tabella();

    cout << "Stato iniziale!" << endl;
    myTris.stampa_griglia();

    int x, y;
    bool mossa_valida;
    int vincitore;
    int mosse_totali=0;
    while (mosse_totali < 9)
    {
        do    {
        cout << "Mossa del giocatore 1." << endl;
        cout << "x: ";
        cin >> x;

        cout << "y: ";
        cin >> y;
        mossa_valida = myTris.giocatore_uno(y, x);
    } while (!mossa_valida);
    myTris.stampa_griglia();
    
    mosse_totali++;
    if(mosse_totali>=9)
        break;
    vincitore = myTris.controlla_vincitore();
    if (vincitore !=0)
        break;
    mosse_totali++;
    if( mosse_totali>=9)
        break;
    
    
     do    {
        cout << "Mossa del giocatore 2." << endl;
        cout << "x: ";
        cin >> x;

        cout << "y: ";
        cin >> y;

        mossa_valida = myTris.giocatore_due(y, x);
    } while (!mossa_valida);
    myTris.stampa_griglia();
    
    vincitore = myTris.controlla_vincitore();
    if (vincitore !=0)
        break;
        mosse_totali = mosse_totali +2;
        cout<<"\n\n"<<mosse_totali<<"\n\n";
    }
    

    if (vincitore == 1)
    
        cout<<"vince il giocatore 1!" <<endl;
    else if (vincitore ==2)
        cout<<"vince il giocatore 2!" <<endl;
    else
        cout<<"pareggio!"<<endl;
        
        return 0;
}
