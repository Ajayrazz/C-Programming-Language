#include <stdio.h>
int main()
{
    printf("Enter Value for Principal, Rate, Time: \n");
    float principal,rate,time;
    scanf("%f",&principal);
    scanf("%f",&rate);
    scanf("%f",&time);
    float Si = (principal * rate * time)/100;
    printf("Simple Interest: %f",Si);
    return 0;
}
