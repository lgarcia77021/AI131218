#include <iostream>
#include "rangen.h"
#include <array>
using namespace std;

int main()
{
char NAME[128];
int x = 0;
int v;
int z = 0;
int r[8];



cout << " Hello, greetings. Please state your name " << endl;

cin >> NAME;



while (NAME[x] !='\0')    // While the string isn't at the end... 
{

    v = int(NAME[x]);
    
     while (v != 1 || 0) {

    int m = v % 2;
    cout << " " << m << " ";
    v = v / 2;
    z = z + 1;
    
    cout << "z" << z << endl;
    r[z] = m;

    if (v == 1||0)
    {
       cout << " "<< v ;
    }
}

 x++;
 
 

}

for(int i=8;i>=1;i--)
{
    
    cout<< r[i] << endl;
    
}

cout << " " << endl;

 RNG();
 
 return 0;
 
 

}
