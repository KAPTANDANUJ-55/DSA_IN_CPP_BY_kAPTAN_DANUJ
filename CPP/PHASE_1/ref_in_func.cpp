#include <iostream>
using namespace std;

// C mein pointer se karna padta tha
void swapC(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// CPP mein reference se — CLEAN! 🔥
void swapCPP(int &a, int &b) {
    int temp = a;    // * nahi lagta!
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    swapC(&x, &y);         // C style — & pass karna padta
    cout << x << " " << y << "\n";   // 20 10

    x = 10; y = 20;        // reset

    swapCPP(x, y);         // CPP style — bilkul normal call! 🎉
    cout << x << " " << y << "\n";   // 20 10
}



/*
**Extra Knowledge 🧠:**

Java mein primitives always pass by value the
CPP mein reference se pass by reference kar sakte ho cleanly
Internally CPP reference = pointer hi hai
bas compiler * automatically handle karta hai!

*/
