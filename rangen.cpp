#include <iostream>
#include <fstream>
#include <cstdio>     
#include <cstdlib>   
#include <ctime>   
#include <bitset>
using namespace std;

int RNG() {
    srand (time(NULL));
    int RGX = rand() % 100000000 + 9999999;

    std::cout << "Random Generated One Time HEX #: \n";
    std::cout << std::hex << RGX << "\n";
    std::bitset<32> box(RGX);
    for (int i=0;i<32;++i){
        std::cout << box[i];
    }
 
}
