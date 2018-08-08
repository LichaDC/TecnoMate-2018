#include <iostream>
using namespace std;

int a, b, c, d;

main(){
    cin >> a>> b>> c>> d;

    if ((b>c) and (d>a) and (c+d>a+b) and (c>0) and (d>0) and (a%2==0)){
        cout<< "Valores aceitos";
    }
    else{
        cout<< "Valores nao aceitos";
    }
}
