#include <stdio.h>
int main()
{
    printf("Enter radius value: ");
    int rad;
    scanf("%d",&rad);
    float volume = (4/3 * 3.14 * rad * rad * rad);
    printf("Volume of Sphere: %f\n",volume);
    return 0;
}
