//program that take array as an input and considering its element as marks of students. Finding roll number(index) which get marks less than 33
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of student : ");
    scanf("%d",&n);
    float arr[n];  // marks value can be in decimal
    for(int i=0; i<n; i++){
        scanf("%f",&arr[i]);
    }
    for(int j=0; j<n; j++){
        if(arr[j] < 33){
            printf("Student whose roll number is %d, get less than 33 marks.",j+1);
        }
    }
    return 0;
}
