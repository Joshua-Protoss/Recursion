#include <math.h>
#include <iostream>

int sum(int n){

    int result = 0;

    for(int i=0; i<=n;i++)
        result += i;

    return result;

}

int sum2(int n){

    if(n==0)
        return 0;
    
    return n + sum(n-1);
}

int main(){

    std::cout << sum(5) << " iterative" << std::endl;
    std::cout << sum2(5) << " recursive" << std::endl;
    
}
