#include<iostream>

using namespace std;

// Lets talk a little bit about smart pointer.
class Person {

public:

	Person() {

		cout << " Creating a Person" << endl;
	}

	~Person() {

		cout << "Deleting a Person" << endl;

	}

};



int main() {
	//unique pointer
	// you need {} to create a unique pointer (called a scope) note that you can only have 1 pointer for the unique pointer... Since its
	// a smart pointer it will delete itself at the end of the scope. However since in a uniquer pointer it cannot share the same memory adress to another pointer
	//because it will delete itself at the end of the scope but not the other pointer that point the same memory adress........ if that made sense
	//{
	//	unique_ptr<Person> person = make_unique<Person>();
		// cannot do : 
		// unique_ptr<Person> person1 = person
		//
	//}


	//Share pointers, as the says it, you can share a pointer. the memory allcoated will only be free when theres no more pointer pointing at it.
	
		{
			shared_ptr<Person> person1;
			//weak_ptr<Person> person1;
			
			{
				shared_ptr<Person> person = make_shared<Person>(); // created a person
				person1 = person; // affects to person1

			} // will not delete the person since theres a pointer pointing to it, note : if its a weak_ptr, then it will delete the person

		}
		// will delete the person



}