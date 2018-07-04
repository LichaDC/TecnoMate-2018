#include <iostream>
#include <iomanip>
using namespace std;

int a, b,  d, e;
float c,  f;

main(){

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    cout<< fixed;
    cout<< setprecision(2);
    cout<< "VALOR A PAGAR: R$ " << b*c + e*f << endl;
}
