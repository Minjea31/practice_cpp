#include <iostream> 
using namespace std;

class Rectangle {
public:
    int width, height;

    Rectangle() : Rectangle(1, 1) { };
    Rectangle(int w, int h)
    {
        width = w; height = h;
    };
    Rectangle(int length) : Rectangle(length, length) {
    };
    bool isSquare();
};


bool Rectangle::isSquare() {
    if (width == height) return true;
    else return false;
}
