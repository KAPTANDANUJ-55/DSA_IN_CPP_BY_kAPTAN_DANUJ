#include <iostream>
using namespace std;

int main() {
    int age = 21;

    int &ref = age;   // ref = age ka ALIAS (doosra naam!)
    //   ↑
    //   & yahan pointer nahi hai — REFERENCE hai!
    //   ref aur age SAME memory location share karte hain!

    cout << age << "\n";   // 21
    cout << ref << "\n";   // 21

    ref = 25;              // ref badla
    cout << age << "\n";   // 25 — age bhi badal gaya! Same memory!

    // POINTER vs REFERENCE
    // Pointer:   int *ptr = &age;  *ptr = 25;  — indirect, * lagana padta
    // Reference: int &ref = age;   ref = 25;   — direct, * nahi lagta!

    // ⚠️ Reference rules:
    // 1. Declare karte waqt initialize karna ZAROORI hai
    // 2. Baad mein kisi aur variable ko refer nahi kar sakta
    // 3. NULL nahi ho sakta (pointer ho sakta tha)

    return 0;
}