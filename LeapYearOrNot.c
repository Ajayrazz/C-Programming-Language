#include <stdio.h>
int main()
{
    printf("Input: \n");
    int year;
    scanf("%d",&year);
    if(year%400 == 0){
        printf("Leap year.");
    }
    else if(year%100==0){
        printf("Not Leap year.");
    }
    else if (year%4==0){
        printf("Leap year.");
    }
    else{
        printf("Not a Leap year.");
    }
    return 0;
    
}
