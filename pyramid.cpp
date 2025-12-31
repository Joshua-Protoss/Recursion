#include <iostream>
#include <string>
using namespace std;

int main(){

    string input {};

    cout << "Please type in a string: " << endl;
    getline(cin,input);

    size_t row = input.length();
    size_t col = 2*row-1;

    cout << "------------------------------------------------------" << endl;
    for (size_t i {0}; i < row; ++i){
        for (size_t j {0}; j < col; ++j ) {
            if(j < row){
                if (i+j >= (row-1)){
                    cout << input.at(i+j-row+1);
                }else{
                    cout << " ";
                }
            }else{
                if (i >= j-row+1){
                    cout << input.at(i-j+row-1);
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}