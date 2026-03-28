#include <iostream>
using namespace std;

// CLASS DEFINITION - ye sirf blueprint hai, koi memory nahi leti abhi
class Car {

    // ACCESS SPECIFIERS (3 types hote hain: public, private, protected)

    private:
        // Ye data bahar se directly access nahi ho sakta
        string brand;
        int speed;

    public:
        // CONSTRUCTOR - jab object banta hai, ye automatically call hota hai
        // Class ke naam jaisa hi naam hota hai, koi return type nahi
        Car(string b, int s) {
            brand = b;
            speed = s;
        }

        // MEMBER FUNCTIONS (methods) - object ka behavior
        void showInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Speed: " << speed << " km/h" << endl;
        }

        void accelerate(int increase) {
            speed += increase;
            cout << brand << " ab " << speed << " km/h pe chal rahi hai!" << endl;
        }

        // DESTRUCTOR - object destroy hone pe automatically call hota hai
        // ~ (tilde) lagta hai naam ke aage
        ~Car() {
            cout << brand << " object destroy ho gaya." << endl;
        }
};

int main() {
    // OBJECT BANAO - Stack pe (automatic memory)
    Car myCar("Toyota", 100);      // Constructor call hoga automatically
    Car friendCar("Honda", 80);

    myCar.showInfo();               // Dot operator se method call
    myCar.accelerate(20);

    // OBJECT - Heap pe (manual memory, new keyword se)
    Car* luxuryCar = new Car("BMW", 200);   // Pointer object
    luxuryCar->showInfo();                  // Arrow operator use hota hai pointer mein
    delete luxuryCar;                       // Manually delete karna padta hai!

    return 0;
}