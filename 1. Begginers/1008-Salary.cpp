#include <iostream>
#include <iomanip>
using namespace std;

int a, b;
float c;

main(){

    cin >> a;
    cin >> b;
    cin >> c;

    cout<< fixed;
    cout<< setprecision(2);
    cout<< "NUMBER = " << a << endl;
    cout<< "SALARY = U$ " << b*c << endl;

}
