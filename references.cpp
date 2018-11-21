#include<iostream>






int test(int& a, int& b) {

	std::cout << a << " " << b << std::endl;
	return (a + b);

}

void swap(int& a, int& b) { // important to put the reference beacause it will swap the "real" value of c and d
	int temp = a;
	a = b;
	b = temp;

}

int main() {



	int a = 10;
	int b = 6;
	test(a, b);


	int c = 10;
	int d = 20;
	swap(c, d);


	std::cout << " new value of c is: " << c << std::endl;
	std::cout << "new value of d is: " << d << std::endl;


	int i; // an int
	int& j = i; // j alias of i, ("j is also under the name of i")
	j = 5;
	std::cout << j << " " << i << std::endl;
	i = 2;
	std::cout << j << " " << i << std::endl;

	
	int t; // an int
	int* p; // a pointer

	p = &t; // the pointer hold the adress of t (&t). p points to t;

	*p = 4; // deference and give it a value;

	std::cout << "value of t is: "<< t  << std::endl;

	system("pause");
}