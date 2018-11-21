#include <iostream>
#include <string>




template<typename T> // example of a template function
T const& Max(T const& a, T const& b) { // note that the const means that the reference of the variable cannot be changed

	return a > b ? a : b;
}

int main() {

	int a = 10;
	int b = 5;
	std::cout << "The max is: " << Max(a, b) << std::endl;

	double c = 12.5;
	double d = 18.65;
	std::cout << "The max is: " << Max(c, d) << std::endl;

	std::string e = "Hello";
	std::string f = "World";
	std::cout << "The max is: " << Max(e, f) << std::endl;
	

	system("pause");
}