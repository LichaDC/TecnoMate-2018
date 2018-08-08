#include <iostream>
using namespace std;

int a, b;

main(){
    cin >> a>> b;

    if ((a % b == 0) or (b % a == 0)){
        cout<< "Sao Multiplos"<< endl;
    }
    else{
        cout<< "Nao sao Multiplos"<< endl;
    }
}
