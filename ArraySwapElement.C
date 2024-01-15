//program that take array of two element and swap its index.
#include <stdio.h>
void swap(int nums[]){
    int temp;
    temp = nums[0];
    nums[0] = nums[1];
    nums[1] = temp;
    return;
}
int main(){
    int arr[2] = {2,5};
    printf("{%d,%d}\n",arr[0],arr[1]);
    swap(arr);
    printf("{%d,%d}",arr[0],arr[1]);
    return 0;
}
