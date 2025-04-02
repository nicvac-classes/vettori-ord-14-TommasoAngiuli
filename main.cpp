#include <iostream>
using namespace std;
int main() {
    int i, n, j, t;
    string tempN;
    bool scambio;

    do {
        cout << "inserisci la dimensione del vettore" << endl;
        cin >> n;
    } while (n < 0);
    string nomi[n];
    int v[n];

    for (i = 0; i <= n - 1; i++) {
        cout << "inserisci nome e voto del " << i + 1 << " °alunno" << endl;
        cin >> nomi[i];
        cin >> v[i];
    }
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
                scambio = true;
                tempN = nomi[j];
                nomi[j] = nomi[j + 1];
                nomi[j + 1] = tempN;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "L'alunno " << nomi[i] << " ha voto " << v[i] << endl;
    }
}