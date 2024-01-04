//Program that tells whether the user given point lies on x-axis, y-axiz or at origin..
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter value: \n");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Given point lies at origin.");
    }
    else if(x==0){
        printf("Given point lies at y-axis.");
    }
    else if(y==0){
        printf("Given point lies at x-axis.");
    }
    else{
        printf("Given point doesnot lies on x and y.");
    }
    return 0;
}
