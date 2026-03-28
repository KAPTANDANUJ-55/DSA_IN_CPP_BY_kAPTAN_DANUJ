#include <iostream>
using namespace std;

void increment(int x) {     // x = copy of original
    x++;                    // sirf copy badli
    cout << "Inside: " << x << "\n";   // 11
}

int main() {
    int num = 10;
    increment(num);
    cout << "Outside: " << num << "\n"; // 10 — nahi badla!
    
    // RAM mein:
    // num → [10] at 1000
    // x   → [10] at 2000  ← ALAG copy bani!
    // x++ → x = 11, num still 10
}