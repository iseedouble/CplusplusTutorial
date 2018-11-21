#include <iostream>

using namespace std;


// what does const do : it declares the "variable, method or object" constant, which means it cannot be modified
class Vector2 {



public:

	Vector2(float x = 0, float y = 0) :x(x), y(y) {

	}


	Vector2 operator+(const Vector2& vec) const {
		Vector2 v;
		v.x = this->x + vec.x;
		v.y = this->y + vec.y;
		return v;

	}
	

	bool operator==(const Vector2 vec) const{
		
		return (this->x == vec.x && this->y == vec.y);

	}

	int getX() const {

		return x;
	}

	int getY() const {

		return y;
	}

	//Vector2 operator==(const Vector2& vec)

private:
	int x;
	int y;
};

// since "cout <<" cannot ouput a Vector2, we can overload it like this and tell him how to print it.
ostream& operator<<(ostream& stream, const Vector2& vec) {

		stream << vec.getX() << " " << vec.getY() << endl;
		 
		return stream;
}

int main() {

	Vector2 position(5, 5);
	Vector2 position2(5, 5);

	Vector2 finalPosition;

	finalPosition = position + position2;

	cout << finalPosition << endl;

	cout << "Is position and position2 the same ? " << (position == position2) << endl;
	system("pause");


}