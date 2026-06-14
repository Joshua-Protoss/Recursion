#include <iostream>
//  enums = a user-defined data type that consists of paired named-integer constants.
//          GREAT if you have a set of potential options

enum Day {sunday = 0, monday = 1 , tuesday = 2 , wednesday = 3, 
        thursday = 4, friday = 5, saturday = 6};

int main(){
    
    Day today = thursday;

    switch(today){
        case sunday: std::cout << "sunday \n";
                     break;
        case monday: std::cout << "monday \n";
                     break;
        case tuesday: std::cout << "tuesday \n";
                     break;
        case 3: std::cout << "wednesday \n";
                     break;
        case 4: std::cout << "thursday \n";
                     break;
        case friday: std::cout << "friday \n";
                     break;
        case saturday: std::cout << "saturday \n";
                     break;

    }




    return 0;
}