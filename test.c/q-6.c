
    #include <stdio.h>

int main() {
    int num, digit;
    int sum=0;

    scanf("%d", &num);

    
    while (num != 0) {
        digit = num % 10;  
        sum += digit;      
        num /= 10;          
    }


    printf("Sum of digits = %d\n", sum);

    return 0;
}








    
    
    
    
    
    
    
    
