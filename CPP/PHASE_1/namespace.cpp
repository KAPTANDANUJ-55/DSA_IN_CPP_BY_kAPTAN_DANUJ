// Socho do alag companies ne same naam ka function banaya
// Conflict hoga na?

// Company A
#include <iostream>
namespace CompanyA {
    void print() { std::cout << "CompanyA print\n"; }
}

// Company B  
namespace CompanyB {
    void print() { std::cout << "CompanyB print\n"; }
}

int main() {
    CompanyA::print();   // :: = scope resolution operator
    CompanyB::print();   // same naam, alag namespace!

// Agar Namespace na hota toh print function me conflict hota
    return 0;
}

/*
// std namespace mein cout, cin, endl sab hain
// isliye likhna padta hai:

std::cout << "Hello\n";   // bina using namespace ke

// YA

using namespace std;       // ek baar likho
cout << "Hello\n";         // ab std:: nahi chahiye

// ⚠️ Competitive programming mein using namespace std; likhte hain
// ⚠️ Large projects mein avoid karte hain — name conflict ho sakta hai

*/
