#include <iostream>

int findArea(int length, int width);
float findArea(float length, float width);

int main(){
	int il = 10;
	int iw = 25;
	float fl = 10.5;
	float fw = 25.5;
	
	int ia;
	float fa;
	
	ia = findArea(il,iw);
	fa = findArea(fl,fw);
}

int findArea(int il, int iw){
	std::cout << "\nInteger\n";
	return il*iw;
}

float findArea(float il, float iw){
	std::cout<<"Float\n";
	return il*iw;
}
