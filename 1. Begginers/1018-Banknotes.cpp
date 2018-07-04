#include <iostream>
using namespace std;

int x;
int n[] {100, 50, 20, 10, 5, 2, 1};

main(){

    cin >> x;

    cout<< x << endl;
    for (int i = 0; i < 7; i++){
        cout<< x/n[i] << " nota(s) de R$ " << n[i] << ",00" << endl;
        x = x%n[i];
    }

}
