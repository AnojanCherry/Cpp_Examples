#include <iostream>

int main(){
    // Declaration and initialisation
    int arrayMultDim_1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int i = 0; i<3; i++){
        for (int j = 0; j<4; j++){
            std::cout << "arrayMultDim_1["<<i<<"]["<<j<<"] = " << arrayMultDim_1[i][j]<<"\n";  
        }
    }
    std::cout<<"\n";


    // Declration and initialisation
    int arrayMultDim_2[3][4]={
        {1,2,3,10},
        {4,5,6,11},
        {7,8,9,12},
    };

    for (int i = 0; i<3; i++){
        for (int j = 0; j<4; j++){
            std::cout << "arrayMultDim_2["<<i<<"]["<<j<<"] = " << arrayMultDim_2[i][j]<<"\n";  
        }
    }
    std::cout<<"\n";
}