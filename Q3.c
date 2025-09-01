#include <stdio.h>
int main (){
    int marks;
    printf("Enter marks:");
    scanf("%d",& marks);

    if (marks >= 90){
       printf("Grade A+");
    }
    else if (marks >= 80) {
        printf ("Grade A");
    }
    else if (marks >= 70) {
        printf("grade B");
    }
     else if (marks >= 60) {
        printf("grade C");
    }    
     else if (marks >= 50) {
        printf("grade D");
    }    
     else if (marks >= 40) {
        printf("grade E");
    } 
     else if (marks <= 40) {
        printf("Fail");
    }   
    else {
        printf("Wrong Input");
    }        

    return 0;
}