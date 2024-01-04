//Program to find greatest among the 4 input integer.
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter Number: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("Greater Number: %d",a);
    }
    else if(b>c && b>d){
        printf("Greater Number: %d",b);
    }
    else if(c>d){
        printf("Greater Number: %d",c);
    }
    else{
        printf("Greater Number: %d",d);
    }
    return 0;
}
