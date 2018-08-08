#include <iostream>
#include <iomanip>
using namespace std;

float salary;
int increase;
main(){
    std::ios::sync_with_stdio(false);

    cin >> salary;

    if ((salary >=   0) and (salary <=  400)){increase = 15;}
    if ((salary >  400) and (salary <=  800)){increase = 12;}
    if ((salary >  800) and (salary <= 1200)){increase = 10;}
    if ((salary > 1200) and (salary <= 2000)){increase = 07;}
    if  (salary > 2000)                      {increase = 04;}

    cout<< fixed;
    cout<< setprecision(2);
    cout<< "Novo salario: "  << salary * (increase+100) / 100<<"\n";
    cout<< "Reajuste ganho: "<< salary *  increase      / 100<<"\n";
    cout<< "Em percentual: " << increase<<" %\n";

}
