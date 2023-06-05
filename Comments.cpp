#include <iostream>
int main(){
	// This is a single line comment
	std::cout << "// This is a single line comment\n";
	/* This is a multi line comment
		This line wont be compiled either*/
	std::cout << "/* This is a multi line comment\n\tCause it is*/\n";
	return 0;
}
