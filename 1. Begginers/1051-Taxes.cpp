#include <iostream>
#include <iomanip>
using namespace std;

float salary;

main(){
    std::ios::sync_with_stdio(false);

    cin >> salary;

    cout<< fixed;
    cout<< setprecision(2);

    if      (salary <= 2000) { cout<< "Isento\n"; }
    else if (salary <= 3000) { cout<< "R$ "<< (salary-2000) * 0.08                        << "\n"; }
    else if (salary <= 4500) { cout<< "R$ "<< (salary-3000) * 0.18 + 1000*0.08            << "\n"; }
    else if (salary >  4500) { cout<< "R$ "<< (salary-4500) * 0.28 + 1000*0.08 + 1500*0.18<< "\n"; }

}
