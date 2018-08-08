#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float moneda[] {100, 50, 20, 10, 5, 2, 1, .5, .25, .1, .05, .01};
double x;
int num = 0;
string tipo[] {"nota(s)", "moeda(s)"};

main(){

    cin >> x;
    num = x * 100;

    cout<< fixed;
    cout<< setprecision(2);
    cout<< "NOTAS:\n";
    for (int i = 0; i < 12; i++){

        cout<< int(num/(moneda[i]*100)) << " "<< (i <= 5 ? "nota(s)" : "moeda(s)")<< " de R$ " << moneda[i] << endl;

        num = fmod(num, moneda[i]*100);

        if (i == 5) {cout<< "MOEDAS:\n";}
    }
}
