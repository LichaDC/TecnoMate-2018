#include <iostream>
#include <iomanip>
using namespace std;

int r;
double pi = 3.14159;

main(){

    cin >> r;

    cout<< fixed;
    cout<< setprecision(3);
    cout<< "VOLUME = " << (4.0/3) * pi *r*r*r << endl;

}
