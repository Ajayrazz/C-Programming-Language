//Progrm to find whether the area of a rectangle is greater than it's perimeter or not.
#include <stdio.h>
int main()
{
    int length,width;
    printf("Enter the length and breadth: \n");
    scanf("%d %d",&length,&width);
    int area = length * width;
    int perimeter = 2 * (length + width);
    if (area > perimeter){
        printf("Area of Rectangle: %d",area);
        printf("\nArea of Rectangle is greater than its perimeter.");
    }
    else{
        printf("Perimeter of Rectangle: %d",perimeter);
        printf("\nArea of Rectangle is less than its perimeter.");
    }
    return 0;
}
