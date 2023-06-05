#include <iostream>

int add(int x, int y){
	return (x+y);
}

int main(){
	std::cout << "int add(int x, int y){\n\treturn (x+y);\n}\n";
	std::cout <<"\nint main(){\n\tstd::cout << add(5,6);\n\treturn 0\n}\n\n";
	std::cout << add(11,12);
	std::cout << "\n";
	return 0;
}
