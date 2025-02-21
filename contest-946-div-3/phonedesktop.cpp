#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int quantidadeTestes;
    cin >> quantidadeTestes;
    
    int iconesP, iconesG, numTelas, quadradosRestantes;
    while (quantidadeTestes--) {
        cin >> iconesP >> iconesG;
        numTelas = ceil(iconesG/2.0);
        quadradosRestantes = 15*numTelas - 4*iconesG;
        if (quadradosRestantes < iconesP) {
            numTelas += ceil((iconesP - quadradosRestantes)/15.0);
        }
        cout << numTelas << "\n";
    }
    
    return 0;
}