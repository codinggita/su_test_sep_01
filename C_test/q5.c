#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int reverse_num=0;
    int i=num;
    while(i>0){
        reverse_num = (reverse_num*10) + (i%10); 
        i = i/10;
    }
    
    if(reverse_num== num){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");

    }
    return 0;
}
