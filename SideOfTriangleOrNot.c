//Program that take 3 integer input and tell whether they are side of a triangle or not.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Side: \n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Given input integer are the sides of a triangle.");
    }
    else{
        printf("Given integer input are not the side of any triangle.");
    }
    return 0;
}
