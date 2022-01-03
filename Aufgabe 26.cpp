#Aufgabe 26
#Berechnet eine endliche geometrische Reihe: 1 + z^1 + z^2 + z^3 ... + z^n

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int z = 0;
    int n = 0;
    int out = 0;
    cout<<"Geben Sie z und n ein: \n";
    cin>>z;
    cin>>n;
    for (int i=0; i<=n; i++){
        out = out + pow(z, i);
    }
    cout<<out;
}
