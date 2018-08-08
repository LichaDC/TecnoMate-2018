#include <iostream>
#include <chrono>
using namespace std;

main(){

    auto start = std::chrono::high_resolution_clock::now();


    // Code... //


    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";

}
