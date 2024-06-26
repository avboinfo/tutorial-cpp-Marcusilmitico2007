// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>
#include <cstdio>


using namespace std;

// input data
int N;
vector<int> H, V;

int TrovaMinimo(int v[],int len){
    int minimo=v[0];
    for(int i=0;i<len;i++){
        if(v[i]<minimo)
            minimo=v[i];
        
    }
    return minimo;

}

int main() {
    //  uncomment the following lines if you want to read/write from files
    //  ifstream cin("input.txt");
    //  ofstream cout("output.txt");
    FILE *input,*output;
    int N;
    input = fopen("inputf1.txt", "r");
    output = fopen("outputf1.txt", "a");

    fscanf(input,"%d ", &N);
    cout<<N;
    int v[N];
    int h[N];

    for (int i = 0; i < 2; i++)
    {
        for(int j=0;j<N;j++){
            if(i==0)
                fscanf(input,"%d ", &h[j]);
            else
                fscanf(input,"%d ", &v[j]);
       }
    }
    int sommav=0;
    int sommah=0;

    for(int j=0;j<N;j++){

        sommav+=v[j];
        sommah+=h[j];

    }
    if(sommav<sommah)
        fprintf(output, "%s ","Ha vinto Verstappen \n ");
    else
        fprintf(output, "%s","Ha vinto Hamilton \n");

    if(TrovaMinimo(h,N)<TrovaMinimo(v,N))
        fprintf(output, "%s", "Il giro veloce lo ha fatto Hamilton \n");
    else
        fprintf(output, "%s","Il giro veloce lo ha fatto Verstappen \n");

    // insert your code here
    return 0;
}
