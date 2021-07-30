#include <iostream>
#include <cstdio>     
#include <cstdlib>   
#include <ctime>    
using namespace std;

int RNG()
{
    int RGX;
    srand (time(NULL));
    RGX = rand() % 100000000 + 9999999;
cout << "Random Generated One Time HEX #:" << endl;
cout << std::hex << RGX << endl;
while(RGX!=1 || 0)
{
    
    int m = RGX % 2;
    cout << " " << m << " ";
    RGX = RGX / 2;
cout << RGX << endl;

}  
return 0;
}
