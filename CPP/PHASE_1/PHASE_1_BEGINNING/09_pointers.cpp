#include <iostream>
using namespace std;

int main() {
    int age = 21;
    
    int *ptr = &age;    // same as C — bilkul same!
    
    cout << age  << "\n";   // 21  — value
    cout << &age << "\n";   // address
    cout << ptr  << "\n";   // same address
    cout << *ptr << "\n";   // 21  — dereference
    
    *ptr = 25;              // pointer se value change
    cout << age << "\n";    // 25
    
    // CPP ka extra — nullptr (C ka NULL)
    int *p = nullptr;       // NULL ki jagah nullptr use karo CPP mein
    
    return 0;
}


/*
## Teen Tarike — Value, Pointer, Reference

Ek hi cheez ke teen tarike samjho:

ORIGINAL:     age = 21    (RAM address: 1000)

Pass by Value     → COPY jaati hai     → original safe
Pass by Pointer   → ADDRESS jaata hai  → * se original change
Pass by Reference → ALIAS jaata hai    → directly original change
*/

