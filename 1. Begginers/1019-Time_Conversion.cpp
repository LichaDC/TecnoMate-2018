#include <iostream>
using namespace std;

int x;

main(){

    cin >> x;

    cout<< x/3600 << ":" << (x%3600)/60 << ":" << (x%3600)%60 <<endl;

}
