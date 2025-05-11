#include <iostream>

int binarySearch(int nums[], int low, int high, int item){

    // we can not find the item
    if(low>high) return -1;
    // pick the middle item
    int middle = low + (high-low)/2; // better than just (high + low)/2 to avoid overflow

    // if the middle item is the number we are looking for: we're done!!!
    if(nums[middle] == item) return middle;

    if(item < nums[middle]){
        // check the left sub-array recursively
        return binarySearch(nums, low, middle-1, item);
    } else{
        // check right sub-array recursively
        return binarySearch(nums, middle+1, high, item);
    }

}

int main(){

    int nums[] = {1,2,3,4,5,10,15,20,30,40,50,60,70}; // sorted data structure
    int num = 50;
    // number of elements
    int n = sizeof(nums)/sizeof(nums[0]);

    std::cout << "Index " << binarySearch(nums, 0, n-1, num) << std::endl;

    return 0;
}