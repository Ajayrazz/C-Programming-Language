#include <stdio.h>
int main()
{
    printf("Enter value: \n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("Remainder: %d\n",a%b);
    }
    else{
        printf("Remainder: %d\n",b%a);
    }
    return 0;
}
