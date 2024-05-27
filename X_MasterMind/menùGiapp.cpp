#include <fstream>
#include <iostream>
#include <vector>
#include <cstdio>

int B,N;
vector<int>P(1);

vector<int>allyoucaneat(){

    int last_remain= B;
    vector<int>R()1;
    
    vector<vector><int>>plates;

    for(int i=0;i<P.size();i++){
        if(P[i]>B)continue;
        int remain =B;
        vector<int> current;
        current.push_back(P[i]);
        remain-=P[i];
        for (int j = i+1; i <P.size ; j++)
        {
            if(P[j]>remain)continue;
            current.push_back(P[j]);
            remain-=P[j];
        }
        if(remain==0) return current;
        plates.push_back(current);


    }
    
    vector<int> R(1);
    for(int i=0;i<P.size();i++)cout<<P[i]<<" ";
    cout<<endl;
    return R;


}
i
nt main{

    ifstram fin("inputmenù.txt", "r");
    ofstream fout("outputmenù.txt", "a");
    vector<int>p(N);
    int B,N;
    fin<<N<<B;
    P.resize(N);
    
    for (int i = 0; i < N; i++)
    {
        fin>>P[i];
    }
    
    vector<int> R=allyoucaneat();


    //salva sul file di output i valori calcolati dalla funzione


    for (int i = 0; i < R.size(); i++){

        fout<<R[i];

        
    }
    fin.close();
    fout.close();

}