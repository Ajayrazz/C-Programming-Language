#include <stdio.h>
int main()
{
    printf("Enter a value : ");
    int num;
    scanf("%d",&num);
    if (num%2==0){
        printf("Even Number.");
    }
    else{
        printf("Odd Number.");
    }
    return 0;
}
