#include <iostream>
#include <iomanip>
using namespace std;

float a, b, c ;
double pi = 3.14159;

main(){

    cin >> a;
    cin >> b;
    cin >> c;

    cout<< fixed;
    cout<< setprecision(3);
    cout<< "TRIANGULO: " << (a*c)/2     << endl;
    cout<< "CIRCULO: "   << pi*c*c      << endl;
    cout<< "TRAPEZIO: "  << ((a+b)*c)/2 << endl;
    cout<< "QUADRADO: "  << b*b         << endl;
    cout<< "RETANGULO: " << a*b         << endl;

}
