#include <stdio.h>

int main() {
    int n, i,c=1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

  
        for (i = 1; i <= n; i++) {
           c *=i ;
        }
        printf("Factorial = %d\n",c);
    
    return 0;
}
