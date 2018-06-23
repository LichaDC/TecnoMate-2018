#include <iostream>
#include <iomanip>
using namespace std;

float a, b;

main(){

    cin >> a;
    cin >> b;

    cout<< fixed;
    cout<< setprecision(5);
    cout<< "MEDIA = " << (a*3.5+b*7.5)/11 <<endl;

}

// Time: 0.000s
