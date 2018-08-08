#include <iostream>
using namespace std;

int n[4];
int may, med, men = 1;

main(){
    cin >> n[1]>> n[2]>> n[3];

    for (int i = 1; i <= 3; i++){
        if (n[i] > n[may]){
            may = i;
        }

        if (n[i] < n[men]){
            men = i;
        }
    }

    for (int i = 1; i <= 3; i++){
        if ((i != may) and (i != men)){
            med = i;
        }
    }
    cout<< n[men]<< endl<< n[med]<< endl<< n[may]<< endl <<endl;
    cout<< n[ 1 ]<< endl<< n[ 2 ]<< endl<< n[ 3 ]<< endl;
}
