#include <iostream>
using namespace std;

int main() {
    // auto — compiler khud type detect kar leta hai!
    auto x = 10;          // int
    auto y = 3.14;        // double
    auto name = "Danuj";  // const char*
    auto str = string("Danuj");  // string

    cout << x << " " << y << "\n";

    // Loops mein bahut useful!
    int arr[] = {1, 2, 3, 4, 5};

    // Range-based for loop — Java ka for-each! 🎉
    for (auto num : arr) {
        cout << num << " ";
    }

    // String ke saath
    string s = "Danuj";
    for (auto ch : s) {
        cout << ch << " ";   // D a n u j
    }

    return 0;
}