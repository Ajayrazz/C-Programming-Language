//program that take string input from user and print its reverse
#include <stdio.h>
#include <string.h>
int main(){
    char str[60];
    puts("Enter a strings : ");
    scanf("%[^\n]s",str);  //taking string input
    int size = 0;
    int k = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("The size of the given input string is %d\n",size);
    for(int i=0, j=size-1; i<=j ;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse string : ");
    puts(str);
    return 0;
    
}
