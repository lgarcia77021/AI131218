#include <iostream>
#include <string>
#include "rangen.h"
using namespace std;

int main() {
    
string NAME;
    
    
cout << " Hello, greetings. Please state your name " << endl;

getline(cin,NAME);

cout << " Greetings " << NAME << endl;

for (int i = 0; NAME[i] != '\0'; i++) {
        int v = int(NAME[i]);
        while (v != 1 || 0) {
            int m = v % 2;
            cout << " " << m << " ";
            v = v / 2;
        }
        cout << " " << v;
        

    }

cout << " " << endl;

 RNG();
 
 return 0;
 
 

}
