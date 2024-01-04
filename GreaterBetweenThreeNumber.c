//Program to find which one is greater among the three given user input number.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c){
        printf("Greater Number: %d",a);
    }
    else if(b>c){
        printf("Greater Number: %d",b);
    }
    else{
        printf("Greater Number: %d",c);
    }
    return 0;
}
