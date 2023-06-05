#include <iostream>

int main(){

    // Create and then assign individually
    float simpleArray_1[4];
    simpleArray_1[0] = 0.9;
    simpleArray_1[1] = 0.8;
    simpleArray_1[2] = 0.7;
    simpleArray_1[3] = 0.6;

    for (int i = 0; i<(sizeof(simpleArray_1)/sizeof(simpleArray_1[0])); i++){
        std::cout << i << ":\t" << simpleArray_1[i] << "\n";
    }
    std::cout << "\n";

    // Declare and initialise
    int simpleArray_2[10] = {0,1,2,3,4,5,6,7,8,9};

    for (int i = 0; i<(sizeof(simpleArray_2)/sizeof(simpleArray_2[0])); i++){
        std::cout << i << ":\t" << simpleArray_2[i] << "\n";
    }
    std::cout << "\n";


    // Initialise with empy declaration
    int simpleArray_3[] = {0,1,2,3,4,5};

    for (int i = 0; i<(sizeof(simpleArray_3)/sizeof(simpleArray_3[0])); i++){
        std::cout << i << ":\t" << simpleArray_3[i] << "\n";
    }
    std::cout << "\n";
}