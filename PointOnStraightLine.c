// Program to check whether the given three (x1,y1), (x2,y2), (x3,y3) point lies on a straight line or not
#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter value: \n");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    // if slope of AB == slope of BC then given point lies on straight line
    int a = (y2-y2)/(x2-x1);
    int b = (y3-y2)/(x3-x2);
    if(a==b){
        printf("Given point lies on a straight line.");
    }
    else{
        printf("Given point doesn't lies on a straight line.");
    }
    return 0;
}
