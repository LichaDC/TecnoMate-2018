#include <iostream>
using namespace std;

float num;

main(){
    cin >> num;

      if ((num >= 0) and (num <=  25)){
        cout<< "Intervalo [0,25]"<< endl;
    }
    else if ((num > 25) and (num <=  50)){
        cout<< "Intervalo (25,50]"<< endl;
    }
    else if ((num > 50) and (num <=  75)){
        cout<< "Intervalo (50,75]"<< endl;
    }
    else if ((num > 75) and (num <= 100)){
        cout<< "Intervalo (75,100]"<< endl;
    }
    else{
        cout<< "Fora de intervalo"<< endl;
    }
}
