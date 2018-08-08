#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, aux;

main(){
    cin >> a>> b>> c;

    // Asure a is the mayor.
    if ((b > a) or (c > a)){
        if ((b > a) and (b > c)){
            aux = a;
            a   = b;
            b   = aux;
        }
        else if (c > a){
            aux = a;
            a   = c;
            c   = aux;
        }
    }
    // Asure c is the minor.
    if (b < c){
        aux = c;
        c   = b;
        b   = aux;
    }

    if (a >= b+c){
        cout<< "NAO FORMA TRIANGULO"<< endl;
    }
    else{
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)){
            cout<< "TRIANGULO RETANGULO"<< endl;
        }
        else if (pow(a, 2) > pow(b, 2) + pow(c, 2)){
            cout<< "TRIANGULO OBTUSANGULO"<< endl;
        }
        else if (pow(a, 2) < pow(b, 2) + pow(c, 2)){
            cout<< "TRIANGULO ACUTANGULO"<< endl;
        }

        if ((a == b) and (a == c)){
            cout<< "TRIANGULO EQUILATERO"<< endl;
        }
        else if ((a == b) or (a == c) or (b == c)){
            cout<< "TRIANGULO ISOSCELES"<< endl;
        }
    }
}
