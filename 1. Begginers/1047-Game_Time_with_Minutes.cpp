#include <iostream>
using namespace std;

int a, b, c, d, hours, minutes;

main(){
    cin >> a>> b>> c>> d;
    hours = c - a;
    minutes = d - b;
    if (hours <= 0){
        hours += 24;
    }
    if (minutes < 0){
        minutes += 60;
        hours--;
    }
    if ((hours == 24) and (minutes > 0)){
        hours -= 24;
    }

    cout<< "O JOGO DUROU "<< hours<< " HORA(S) E "<< minutes<< " MINUTO(S)"<< endl;

}
