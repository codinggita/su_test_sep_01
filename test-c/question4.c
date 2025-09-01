 
 
 #include <stdio.h>

intmain() {
    int num;
    unsigned long long factorial = 1;

    
  
    scanf("%d", &num);

   
 
        for (int i = 1; i <= num; ++i) 
            factorial *= i;
    
        printf("Factorial of %d = %llu\n", num, factorial);
    
    

    return 0;
}
