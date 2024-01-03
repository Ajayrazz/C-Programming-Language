#include <stdio.h>
int main()
{
    printf("Enter marks of 5 Subject: \n");
    float a,b,c,d,e;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    float Average = (a+b+c+d+e)/5;
    printf("Average of 5 subject: %f\n",Average);
    return 0;
}
