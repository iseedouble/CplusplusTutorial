#include<iostream>

using namespace std;

// There isnt much to say on this code. I just wanted to explain what is dynamic memory in c++ by commenting on the code below


int main() {


	// First of all you need to understant the difference between the stack and the Heap.
	// In a stack, you can see every local variables of a function, and you know in advance the size that these variables and allocate that memory
	//Ex : int 4; will take the space of an integer
	//You use the heap during run time, when you do not know the size of a variable.
	//Why use the stack then ? Because it's a lot faster. Since its a LIFO its easier to keep track of blocks
	// In the heap, varables can be anywhere, each blocks of memories doesn't have dependencies, so keeping track is a bit harder.	


	int *p = new int;  // We know that pointer can store adress. So here we give the adress of an int that's in the heap
						// take note that *p (that has the adress stores) is on the stack 

	*p = 15; // we give that block of memory the interger 15;

	delete p; // deallocating p in the heap. its still here in the stack with the adress of the previous value in the heap.. if that makes sense
			 // for now it doesnt point to anything until the end of the program
	

	//	here we reassing p, but if we dont, good practice would be to do : 
	// p = NULL; //the pointer p has now the value of NULL (0)


	p = new int(30);  // p will now have the adresse of the new allocated int in the heap




}