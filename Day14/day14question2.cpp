#include <iostream>
using namespace std;

class Rectangle {
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    Rectangle(const Rectangle& rect) : width(rect.width), height(rect.height) {}

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;

    rect1.display();
    rect2.display();

    return 0;
}
