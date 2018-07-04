#include <iostream>
using namespace std;

int x;

main(){

    cin >> x;

    cout<< x/365 << " ano(s)\n" << (x%365)/30 << " mes(es)\n" << (x%365)%30 << " dia(s)" << endl;

}
