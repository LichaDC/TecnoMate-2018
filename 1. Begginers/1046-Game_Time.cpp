#include <iostream>
using namespace std;

int a, b, hours;

main(){
    cin >> a>> b;
    hours = b - a;
    if (hours <= 0){
        hours += 24;
    }

    cout<< "O JOGO DUROU "<< hours<< " HORA(S)"<< endl;

}
