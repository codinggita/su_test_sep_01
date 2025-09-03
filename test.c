#include <stdio.h>

int main(){

     char i;                      //1. 
    scanf("%c",&i);

    if(i>=65 && i<=90 || i >= 97 && i <= 122){
        printf("alphibet");
    }
    else if(i >= 48 && i <= 57){
        printf("digit");
    }
    else{
        printf("Speciil Sysbol");
    }




   // int s1, s2, s3, s4, s5;    //3. 
    // int total;
    // float percentage;

    // scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // total = s1 + s2 + s3 + s4 + s5;
    // percentage = (total / 500.0) * 100;

    // printf("Percentage = %.0f%%\n", percentage);

    // if (percentage >= 90) {
    //     printf("Grade A+\n");
    // } 
    // else if (percentage >= 80) {
    //     printf("Grade A\n");
    // } 
    // else if (percentage >= 70) {
    //     printf("Grade B\n");
    // } 
    // else if (percentage >= 60) {
    //     printf("Grade C\n");
    // } 
    // else if (percentage >= 50) {
    //     printf("Grade D\n");
    // } 
    // else if (percentage >= 40) {
    //     printf("Grade E\n");
    // } 
    // else {
    //     printf("Fail\n");
    // }




   // int n, i;               //4. 
    // int factorial = 1;

    // scanf("%d", &n);

    //     for (i = 1; i <= n; i++) {
    //         factorial *= i;
    //     }
    //     printf("Factorial of %d = %d\n", n, factorial);
    


   // int num, a, i;             //5.
    // int rev = 0;

    // scanf("%d", &num);

    // i = num;

    // while (num > 0) {
    //     a = num % 10;         
    //    rev = rev * 10 + a;
    //     num = num / 10;                
    // }

    // printf("rev Number = %d\n", rev);

    // if (i == rev) {
    //     printf("%d is a Palindrome.\n", i);
    // } else {
    //     printf("%d is NOT a Palindrome.\n", i);
    // }



   
   // int num, i;        //6.
    // int sum = 0;

    // scanf("%d", &num);

    // while (num > 0) {
    //     i = num % 10;  
    //     sum += i;      
    //     num = num / 10;         
    // }

    // printf("Sum of digits = %d\n", sum);



   // int num, i, j;                    //7. 
    // int result = 0;

    // scanf("%d", &num);
    // i = num;

    // while (num > 0) {
    //     j = num % 10;         
    //     result += j * j * j; 
    //     num = num / 10;               
    // }
    
    // if (result == i) {
    //     printf("%d is an Armstrong number.\n", i);
    // } else {
    //     printf("%d is NOT an Armstrong number.\n", i);
    // }


    //  int num1, num2;          //8.
    // char c;

    // scanf("%d %d", &num1, &num2);

    // scanf(" %c", &c); 

    // switch(c) {
    //     case '+': printf("%d %c %d = %d", num1, c, num2, num1 + num2);
    //         break;
            
    //     case '-': printf("%d %c %d = %d", num1, c, num2, num1 - num2);
    //         break;
            
    //       case '%':
    //         if(num2 != 0){
    //             printf("%d %c %d = %d", num1, c, num2, num1 % num2);
    //         }
    //         else{
    //             printf("zero is not allowed");
    //         }
    //         break; 
            
    //     case '*':printf("%d %c %d = %d\n", num1, c, num2, num1 * num2);
    //         break;
            
    //     case '/':
    //         if(num2 != 0){
    //             printf("%d %c %d = %d\n", num1, c, num2, num1 / num2);
    //         }
    //         else{
    //             printf("zero is not allowed");
    //         }
    //         break;

    // }



    // int num,count = 0 ;                 //9.
    // int sum = 0;
    // float average;

    // while (1) {
    //     scanf("%d", &num);

    //     if (num == 0) {
    //         break; 
    //     }
    //     sum += num;
    //     count++;
    // }

    // if (count > 0) {
    //     average = (float)sum / count;
    //     printf("Sum = %d\n", sum);
    //     printf("Average = %.2f\n", average);
    // } else {
    //     printf("No numbers entered.\n");
    // }





    // int n;                               //10.

    // scanf("%d", &n);

    // if (n > 0 && (n & (n - 1)) == 0) {
    //     printf("%d is a power of 2.\n", n);
    // } else {
    //     printf("%d is NOT a power of 2.\n", n);
    // }



    return 0;
}