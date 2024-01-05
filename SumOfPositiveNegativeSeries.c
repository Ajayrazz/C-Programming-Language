//program to sum value of given series
// 1-2+3-4+5-6-----up to 'n' terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Value : ");
    scanf("%d",&n);
    int evenSum = 0;
    int oddSum = 0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            evenSum += i;
        } else {
            oddSum += i;
        }
    }
    int sum = oddSum - evenSum;
    printf("Sum of the given series : %d",sum);
    return 0;
}
