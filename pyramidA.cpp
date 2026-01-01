#include <iostream>
#include <string>
using namespace std;

int main(){
    string elements {};
    cout << endl << "Enter anything: "; 
    getline(cin, elements);

    for (size_t i {0}; i < elements.length(); ++i){
        string spaces (elements.length() - i + 1 , ' ');
        cout << spaces;
        for (size_t n {0}; n <= i; ++n){
            cout << elements[n];
        }
        for (size_t m {0}; m < i; ++m){
            cout << elements[i - m - 1];
        }
        cout << endl;
     }
    cout << endl;
    return 0;
}