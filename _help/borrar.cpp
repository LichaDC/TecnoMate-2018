#include <iostream>
#include <chrono>
using namespace std;

main(){
std::ios::sync_with_stdio(false);
    auto start = std::chrono::high_resolution_clock::now();


    for (int i = 0; i<=1000; i++){
        cout<< i<<"\n";
    }


    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";

}
