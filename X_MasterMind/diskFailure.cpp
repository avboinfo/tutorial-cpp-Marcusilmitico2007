#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    long long A, B, T; // A inizio ,B fine ,T 
    cin >> A >> B >> T;
    long long Oremancanti = 24 - (B - A);

    long long down_time;

    if (T <= Oremancanti) {
        down_time = 0;
        } else {
        long long giorni = T/ 24;
        long long oreRimanenti = T % 24;
        if (oreRimanenti <= Oremancanti) {
            down_time = giorni * (B - A);
        } else {
            down_time = giorni * (B - A) + (oreRimanenti - Oremancanti);
        }
    }


    cout << down_time << endl;

    return 0;
}






