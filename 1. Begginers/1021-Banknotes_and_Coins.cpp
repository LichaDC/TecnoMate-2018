#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float n[] {100, 50, 20, 10, 5, 2, 1, .5, .25, .1, .05, .01};
int x, j = 0;
string tipo[] {"nota(s)", "moeda(s)"};
main(){

    cin >> x;

    cout<< fixed;
    cout<< setprecision(2);
    cout<< "NOTAS:\n";
    for (int i = 0; i < 12; i++){
        cout<< int(x/n[i]) << " " << tipo[j]<< " de R$ " << n[i] << endl;


        x = fmod(x, n[i]); // ERROR HERE
    


        if (i == 5) {cout<< "MOEDAS:\n"; j=1;}
    }
}
