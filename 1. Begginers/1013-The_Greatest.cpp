#include <iostream>
using namespace std;

float a, b, c ;

int mayor(int x, int y){
    return (x + y + abs(x-y)) / 2;
}
main(){

    cin >> a;
    cin >> b;
    cin >> c;

    cout<< mayor( mayor( a,b), c) << " eh o maior" << endl;

}
