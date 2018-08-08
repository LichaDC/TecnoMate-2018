#include <iostream>
#include <iomanip>
using namespace std;

float a, b, c, d, e, avg;

main(){
    cin >> a>>  b>> c>> d;

    avg = (a*2 + b*3 + c*4 + d*1) /10;

    cout<< fixed;
    cout<< setprecision(1);

    cout<< "Media: "<< avg<< endl;

    if (avg >= 7){
        cout<< "Aluno aprovado."<< endl;
    }
    else if (avg < 5){
        cout<< "Aluno reprovado."<< endl;
    }
    else if ((avg >= 5) and (avg < 7)){
        cout<< "Aluno em exame."<< endl;
        cin >> e;
        cout<< "Nota do exame: "<< e<< endl;
        avg = (avg + e) / 2;

        if (avg >= 5 ){
            cout<< "Aluno aprovado."<< endl;
        }
        else{
            cout<< "Aluno reprovado."<< endl;
        }
        cout<< "Media final: "<< avg<< endl;
    }
}
