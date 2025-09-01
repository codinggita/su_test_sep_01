 #include <stdio.h>

int main() {
    int num=0;
    int digit=0;
    int sum= 0;

   
   
    scanf("%d", &num);

    
    while (num != 0) {
        digit = num % 10;   
        sum += digit;     
        num /= 10;           
    }

    
    printf("Sum = %d\n", sum);

    return 0;
}