#include <iostream>
using namespace std;



/***************************************************************/
//Overloading is very simple, you are the one that defines what a operation will do
//In this code we will look at a simple addition overloadign operator
/***************************************************************/
class Triangle {
public:
	void setHeight(int h) {

		height = h;
	}
	void setBase(int b) {

		base = b;
	}
	
	double getArea() {

		return (height * base)/2;
	}

	// this will do the overloading
	Triangle operator+(const Triangle &t) {
		Triangle triangle; //creates a new local object
		triangle.height = this->height + t.height; // this->height represent t1 and t.height is t2 and adds it to the height of the new triangle
		triangle.base = this->base + t.base; // same as height
		return triangle; // returns the triangle with the new height and base

	}

private:
	int height;
	int base;

};

int main() {

	Triangle t1;
	t1.setHeight(10);
	t1.setBase(5);

	cout << "the area of t1 is: " << t1.getArea() << endl;
	Triangle t2;
	t2.setHeight(12);
	t2.setBase(2);

	cout << "the area of t2 is: " << t2.getArea() << endl;

	Triangle t3;
	t3 = t1 + t2;
	cout << "the area of t3 is: " << t3.getArea() << endl;

	system("pause");


	return 0;
}