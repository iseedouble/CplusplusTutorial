#include <iostream>
using namespace std;

class Shape {
protected:
	int width, height;

public:
	Shape(int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	virtual int area() {
		cout << "Parent class area :" << endl;
		return 0;
	}
	// if we do not put virtual, the output in main will be "Parent class area :" its called static resolution. The compiler sets it at the base case. (its looks only  the object
	// Shape and not the pointer).
	// however with the virtual keywork, the compiler look the value of its pointer instead of its type. (thats why theres the Shape *shape in main)
	// virtual tells the compiler not to use static resolution ~ish
};
class Rectangle : public Shape {
public:
	Rectangle(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}
};

class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) :Shape(a, b) { }

	int area() {
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};


int main() {
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);
	
	// store the address of Rectangle
	// Note: I can store &rec in shape since &rec inherites shape
	shape = &rec;

	// call rectangle area.
	shape->area();

	// store the address of Triangle
	shape = &tri;

	// call triangle area.
	shape->area();


	system("pause");
	return 0;
}