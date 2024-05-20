#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <fstream>


int maxCarnet(int N, int M){
    
    return N/M;
}
int restoCarnet(int N, int M){
    
    int resto=N-M*maxCarnet(N,M);
    return resto;
    
}
int costototale(int N, int M, int A, int B){
    return maxCarnet(N,M)*B + restoCarnet(N,M)*A;
}

int compra(int N, int M, int A, int B)
{
    int NCarnet = 0;
    int NBiglietti = 0;
    int totale, costo;

    while (N > 0)
    {
        totale = N * A;
        if (totale > B)
        {
            N-= M;
            NCarnet++;
        }
        else
        {
            NBiglietti = N;
            N = 0;
        }
    }

    costo = (NCarnet * B) + (NBiglietti * A);
    return costo;
}

int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}

