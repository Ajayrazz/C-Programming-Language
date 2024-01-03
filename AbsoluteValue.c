//program to print absolute value
//Absolute value means posituve value
#include <stdio.h>
int main()
{
    printf("Enter number: ");
    int num;
    scanf("%d",&num);
    if (num<0){
        int absolute = (-1) * num;
        printf("Absolute value: %d",absolute);
    }
    else{
        printf("Absolute value: %d",num);
    }
    return 0;
}
