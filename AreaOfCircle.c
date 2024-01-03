#include <stdio.h>
int main()
{
    printf("Enter radius: ");
    int rad;
    scanf("%d",&rad);
    float Area = (3.14 * rad * rad);
    printf("Area of Circle: %f\n",Area);
    return 0;
}
