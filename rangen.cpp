#include <iostream>
#include <cstdio>     
#include <cstdlib>   
#include <ctime>       
using namespace std;

int RNG()
{
    
    int RGX;
    
    cout << " RNG online " << endl;
    

  srand (time(NULL));


  RGX = rand() % 100000000;
  
    cout << RGX << endl;
    
    return 0;
    
}
