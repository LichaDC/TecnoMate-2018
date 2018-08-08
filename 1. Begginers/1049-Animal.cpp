#include <iostream>
using namespace std;

string word[3];
int type = 0;

main(){
    std::ios::sync_with_stdio(false);

    cin >> word[0]>> word[1]>> word[2];

    if (word[0] == "invertebrado"){type += 100;}
    if ((word[1] == "mamifero") or (word[1] == "anelideo")){type += 10;}
    if (word[2] == "herbivoro" or ((word[2] == "onivoro") and (type != 10))){type += 1;}


    switch (type) {
        case   0: {cout<< "aguia\n"      ; break;}
        case   1: {cout<< "pomba\n"      ; break;}
        case  10: {cout<< "homem\n"      ; break;}
        case  11: {cout<< "vaca\n"       ; break;}
        case 100: {cout<< "pulga\n"      ; break;}
        case 101: {cout<< "lagarta\n"    ; break;}
        case 110: {cout<< "sanguessuga\n"; break;}
        case 111: {cout<< "minhoca\n"    ; break;}
    }
}
