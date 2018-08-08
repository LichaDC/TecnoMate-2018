#include <iostream>
#include <iomanip>
using namespace std;

int code, qtity;
float total;

main(){
    cin >> code>> qtity;

    cout<< fixed;
    cout<< setprecision(2);
    switch (code) {
        case 1: total = qtity * 4.00; break;
        case 2: total = qtity * 4.50; break;
        case 3: total = qtity * 5.00; break;
        case 4: total = qtity * 2.00; break;
        case 5: total = qtity * 1.50; break;
    }

cout<< "Total: R$ "<< total <<endl;
}
