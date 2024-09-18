#include <iostream>
using namespace std;

class Car {
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string bName, string m, string e, int seats) {
        brandName = bName;
        model = m;
        engine = e;
        numberOfSeats = seats;
    }

    void displayInfo() {
        cout << "Car Information:" << endl;
        cout << "Brand: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car tesla("Tesla", "Model S", "Electric", 5);


    tesla.displayInfo();

    return 0;
}
