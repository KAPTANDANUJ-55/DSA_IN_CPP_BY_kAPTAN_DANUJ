#include <iostream>
using namespace std;

void byValue(int x)   { x = 999; }         // copy badli
void byPointer(int *x){ *x = 999; }        // address pe gaya
void byReference(int &x){ x = 999; }       // alias se badla

int main() {
    int a = 10, b = 10, c = 10;
    
    byValue(a);         // a pass, copy gayi
    byPointer(&b);      // b ka address pass
    byReference(c);     // c ka alias pass
    
    cout << a << "\n";  // 10  — nahi badla
    cout << b << "\n";  // 999 — badal gaya
    cout << c << "\n";  // 999 — badal gaya
}