#include <iostream>
using namespace std;

class Square {
protected:
    double side;

public:
    Square(double s) { side = s; }
    double getPeri() { return 4 * side; }
    double getArea() { return side * side; }
};

class Cube : public Square {
public:
    Cube(double s) : Square(s) {}
    double getVolume() { return side * side * side; }
};

int main() {
    Cube c(4);
    cout << "Area: " << c.getArea() << endl;
    cout << "Volume: " << c.getVolume();
    return 0;
}
