#include <iostream>
#include <iomanip>
using namespace std;

string a;
double b, c;
main(){

    cin >> a;
    cin >> b;
    cin >> c;

    cout<< fixed;
    cout<< setprecision(2);
    cout<< "TOTAL = R$ " << b+c*0.15 << endl;

}
