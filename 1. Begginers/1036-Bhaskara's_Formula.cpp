#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a, b, c; // Con float no funcionaba.

main(){
    cin >> a>> b>> c;

    cout<< fixed;
    cout<< setprecision(5);
    if (((pow(b, 2) - 4*a*c) >= 0) and (a != 0)) {
        cout<< "R1 = "<< (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a)<< endl;
        cout<< "R2 = "<< (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a)<< endl;
    }
    else{
        cout<< "Impossivel calcular"<< endl;
    }
}
