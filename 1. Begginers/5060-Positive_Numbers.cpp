#include <iostream>
using namespace std;

int positives = 0;
float n;

main(){
    std::ios::sync_with_stdio(false);

    for (int i = 0; i < 6; i++){
        cin >> n;
        if (n > 0) { positives ++; }
        // cout<< i<< endl;
    }

    cout<< positives<< " valores positivos\n";
}
