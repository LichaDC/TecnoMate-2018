#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double x1, y1_, x2, y2;

main(){

    cin >> x1;
    cin >> y1_;
    cin >> x2;
    cin >> y2;

    cout<< fixed;
    cout<< setprecision(4);
    cout<< sqrt((x2-x1)*(x2-x1) + (y2-y1_)*(y2-y1_))  << endl;
}
