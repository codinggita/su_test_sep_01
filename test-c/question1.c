 Question_1
 
 #include <stdio.h>

  int main() {
    char ch;

   
    printf(" type here  ");
    scanf("%c", &ch);

   

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("alphabet\n"); }
         else if (ch >= '0' && ch <= '9') 
         {
        printf("digit\n");
    } 
else {
        printf("symbol.\n");
 }

    return 0;
}