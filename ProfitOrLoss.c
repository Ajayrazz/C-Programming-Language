//Program to determine the profit or loss
//Take input from user for cost price and selling price
#include <stdio.h>
int main()
{
    int cp,sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);      // Taking input for cp
    printf("Enter Selling Price: ");
    scanf("%d",&sp);      // Taking input for sp
    if( cp>sp ){
        int loss = (cp-sp);
        printf("Total Loss: %d",loss);
    }
    else{
        int profit = (sp-cp);
        printf("Total Profit: %d",profit);
    }
    return 0;
}
