#include <iostream>
#include <iomanip>
using namespace std;

float a, b, c;

main(){
    cin >> a>> b>> c;

    cout<< fixed;
    cout<< setprecision(1);
    if((a+b > c) and (a+c > b) and (b+c > a)){
        cout<< "Perimetro = "<< a+b+c<< endl;
    }
    else{
        cout<< "Area = "<< ((a + b) / 2) * c<< endl;
    }
}
