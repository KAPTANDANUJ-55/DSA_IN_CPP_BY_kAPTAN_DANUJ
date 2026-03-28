#include <iostream>
#include <string>     // string ke liye (iostream se bhi aa jata hai mostly)
using namespace std;

int main() {
    string name = "Danuj";
    string last = "Bhai";

    // Concatenation — + se! (C mein strcat tha 😅)
    string full = name + " " + last;
    cout << full << "\n";           // Danuj Bhai

    // Length
    cout << name.length() << "\n";  // 5 — Java jaisa .length()!

    // Access character
    cout << name[0] << "\n";        // D

    // Compare — == se! (C mein strcmp tha 😅)
    if (name == "Danuj") {
        cout << "Same naam!\n";
    }

    // Substring
    cout << full.substr(0, 5) << "\n";   // Danuj — Java ka substring()!

    // Find
    cout << full.find("Bhai") << "\n";   // 6 — index return karta hai

    // Input with spaces
    string sentence;
    cout << "Sentence likho: ";
    getline(cin, sentence);   // cin >> spaces pe rok deta hai
                              // getline puri line leta hai
    cout << sentence << "\n";

    return 0;
}