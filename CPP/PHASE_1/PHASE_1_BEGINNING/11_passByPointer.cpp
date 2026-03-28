#include <iostream>
using namespace std;

void increment(int *ptr) {  // address aaya
    (*ptr)++;               // us address pe ja, value badlo
    // ⚠️ *ptr++ mat likhna — precedence issue!
    // (*ptr)++ likhna — pehle deref, phir increment
    cout << "Inside: " << *ptr << "\n";   // 11
}

int main() {
    int num = 10;
    increment(&num);        // address pass karo
    cout << "Outside: " << num << "\n";  // 11 — badal gaya!
    
    // RAM mein:
    // num → [10]  at 1000
    // ptr → [1000] at 2000  ← address store hua
    // (*ptr)++ → 1000 pe gaya, 10 ko 11 kiya
    // num ab 11!
}
