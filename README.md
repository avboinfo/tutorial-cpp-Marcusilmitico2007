


class Tris{
    public:
    int griglia[3][3];


    void reset_tabella(){

        for (int i=0;i<3;i++)
    {
        for (int j =0;j<3;j++)
        {
            griglia[i][j]=0;
            
        }
    }
    }
}
    void stampa_griglia()
    {
        for (int i=0;i<3;i++)
    {
            for (int j =0;j<3;j++)
        {
            cout<< griglia[i][j]<<"\t;
    }

    }
    
    
    bool giocatoreuno(int x, int y){

    }

    bool giocatoredue(int x, int y){
        
    }


};


int main(int argc, char const *argv[])
{
    Tris myTris;

    myTris.reset_tabella();





}