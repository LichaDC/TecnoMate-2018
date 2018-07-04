#include <iostream>
#include <iomanip>
using namespace std;

int   x;
float y;

main(){

    cin >> x;
    cin >> y;

    cout<< fixed;
    cout<< setprecision(3);
    cout<< x/y << " km/l" << endl;
}
