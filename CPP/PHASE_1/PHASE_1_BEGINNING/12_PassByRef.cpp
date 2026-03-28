#include <iostream>
using namespace std;

void increment(int &ref) {  // alias aaya — same memory!
    ref++;                  // seedha original badla
    cout << "Inside: " << ref << "\n";   // 11
}

int main() {
    int num = 10;
    increment(num);         // normal call — & nahi lagta!
    cout << "Outside: " << num << "\n";  // 11 — badal gaya!
    
    // RAM mein:
    // num → [10] at 1000
    // ref → 1000 ka ALIAS  ← same location!
    // ref++ → seedha 1000 pe badla
}