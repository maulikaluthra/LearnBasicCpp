// Leonardo Goulart
// c++ programming language


#include <iostream>
#include <cstring>

int main() {

	// Variables types
		int Integer;
		float Float;
		double Double;
		//Must be only one character
		char Char;
		// For this last one we need to add the library cstring to the code
		std::string String;
		// Can be only true or false
		bool 

	// Read and print values on screen
		// Input
			std::cin >> Integer;
			std::cin >> Float;
			std::cin >> Double;
			std::cin >> Char;
			std::cin >> String;
		// Output
			std::cout << "Output of values entered" << std::endl; 
			std::cout << Integer << std::endl;
			std::cout << Float   << std::endl;
			std::cout << Double  << std::endl;
			std::cout << Char    << std::endl;
			std::cout << String  << std::endl;
			std::cout << std::endl;

	// You can make opearations with numeric variables such as '+' '-' '^' '%' '/'
		// You can create a new variable or just print the operation like this
			std::cout << "'+' '-' '*' '/' ..." << std::endl;
			float newFloat = Integer + Float;
			std::cout << newFloat << std::endl;
			std::cout << Integer + Float << std::endl;
			std::cout << std::endl;
		// Note that the value will turn to a Float type and both of prints are equal.

	// We can compare the variables using conditional structions
		// You say what your code supposed to do 'if' of 'else'
			std::cout << "Is Integer variable equal to 42?" << std::endl;
			std::cout << "If yes -> 1\nelse -> 0" << std::endl;
			std::cout << "Answer: ";
			if ( Integer == 42 ) {
				std::cout << true << std::endl;
			} else {
				std::cout << false << std::endl;
			}
			std::cout << std::endl;

	// Know the difference
		// While | For | Do.. While 
			// For
				// Will repeat the code inside it until reach the end of condition
					std::cout << "\nBegin of For Structure" << "\n\n";
					for ( int index = 0; index < 5; index++ ) {
						std::cout << "Running For Structure" << std::endl;
					}	
					std::cout << "\nEnd of For Structure" << std::endl;
				
			// While
				// Will repeat the code inside it until the condition turns false
					// If the condition is false at the beginnig will pass through it

			// Do.. While
				// Will repeat the code inside it until the condition turns false
					// If the condition is false at the beginnig will run only ont time

}
