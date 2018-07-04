#include <iostream>
#include <iomanip>
using namespace std;

float a, b, c;

main(){

    cin >> a;
    cin >> b;
    cin >> c;

    cout<< fixed;
    cout<< setprecision(1);
    cout<< "MEDIA = " << (a*2+b*3+c*5)/10 << endl;

}
