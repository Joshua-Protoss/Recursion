#include <iostream>

void linearSearch(int array[], int n, int a){
    
    for(int i=0; i<n; i++)
        if(array[i] == a)
            std::cout << "Item found at index: " << i << std::endl;
}

int main(){

    int array[] = {1, 12, 4, 8, -2, 0, 1, 9};
    int n = sizeof(array) / sizeof(array[0]);

    linearSearch(array,n,8);

    return 0;
}