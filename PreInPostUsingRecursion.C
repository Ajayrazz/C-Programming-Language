//program that uses recursion to print pre in post
#include<stdio.h>
void preInpost(int a){
    if(a==0) return;
    printf("Pre %d\n",a);
    preInpost(a-1);
    printf("In %d\n",a);
    preInpost(a-1);
    printf("Post %d\n",a);
    return;
}
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    preInpost(n);
    return 0;
