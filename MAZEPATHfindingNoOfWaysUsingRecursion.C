//program to find the path that in how many ways a person can go from starting position to ending position in a grid { MAZE PATH }
#include <stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    int m,n;
    printf("Enter value for m : ");
    scanf("%d",&m);
    printf("Enter value for n : ");
    scanf("%d",&n);
    int noOfWays = maze(1,1,m,n);
    printf("Total number of ways : %d",noOfWays);
    return 0;
    
}
