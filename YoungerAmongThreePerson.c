//Program to find youngest of the three
#include <stdio.h>
int main()
{
    int x,y,z;   
    printf("Enter ages: \n");
    scanf("%d %d %d",&x,&y,&z);
    if(x < y && x < z){
        printf("Ram is the younger one.");
    }
    else if(y < z){
        printf("Shyam is the younger one.");
    }
    else{
        printf("Ajay is the younger one.");
    }
    return 0;
}
