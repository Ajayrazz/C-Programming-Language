#include <stdio.h>
int main()
{
    printf("Enter value: ");
    int num;
    scanf("%d",&num); //Taking input from user.
    if (num%5==0){
        printf("Divisible by 5.");
    }
    else{
        printf("Not divisible by 5.");
    }
}
