#include <fstream>
#include <iostream>
#include <vector>
#include <cstdio>


using namespace std;
int massimoVettore(int v[], int len){
    int massimo = v[0];
    for(int i = 1; i < len; i++){
        if(v[i] > massimo){
            massimo = v[i];
        }
    }
    return massimo;
}


int pollice_verde(int N, int* H) {
    int posMax=0;
    while (posMax<N && H[posMax]!=massimoVettore(H,N))
    {    
        posMax++;
    }
    int maxSx=massimoVettore(H,N);
    int maxDx=massimoVettore(H,N);
    int piante=1;

    for (int  i = posMax + 1 ; i <N ; i++)
    {
        if(H[i]>=H[i-1])
            piante++;
    }
    for (int i = posMax - 1; i>=0; i--)
    {
        if(H[i]>=H[i+1])
            piante++;
    }
    return piante;
}


int main()
{
    FILE *input,*output;
    int N;
    input = fopen("inputbu.txt", "r");
    output = fopen("outputbu.txt", "a");

    fscanf(input,"%d", &N);
    cout<<N;
    int H[N];

    
    for(int j=0;j<N;j++){
        fscanf(input,"%d ", &H[j]);
    }

    int piante;
    piante=pollice_verde(N,H);
    cout<<piante;
    

    fprintf(output,"%d", piante);

    return 0;


}







