#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double pi = 3.14159;
double r;


int main(){

    cin >> r;

    cout<< fixed;
    cout<< setprecision(4);
    cout<< "A=" << pi*pow(r,2) << endl;

}
