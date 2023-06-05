#include <iostream>
#include <string>

template<typename variable>
int expand(variable const&, std::string variable_name){
	std::cout << "The size of " << variable_name << ":\t";
	std::cout << sizeof(variable) << " bytes\n";
	return 0;
}

int main(){
	int var_int;
	short int var_short_int;
	long int var_long_int;
	char var_char;
	bool var_bool;
	float var_float;
	double var_double_float;
	long long int var_long_long_int;
	expand(var_int, "an integer");
	expand(var_short_int, "a short integer");
	expand(var_long_int, "a long intger");
	expand(var_char, "a character");
	expand(var_bool, "a boolean");
	expand(var_float, "a float");
	expand(var_double_float, "a double float");
	expand(var_long_long_int, "a long long int");
	return 0;
}
