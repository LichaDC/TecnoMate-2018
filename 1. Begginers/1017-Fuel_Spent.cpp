#include <iostream>
#include <iomanip>
using namespace std;

int a,b;

main(){

    cin >> a;
    cin >> b;

    cout<< fixed;
    cout<< setprecision(3);
    cout<< (a*b)/12.0 << endl;

}
