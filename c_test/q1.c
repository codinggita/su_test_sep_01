#include <stdio.h>
int main(){
char c;
printf("enter a single character:");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z')){
    printf("Alphabet");
}
else if(c>='0' && c<='9'){
    printf("Digit");
}
else{
    printf("Special symbol");
}
return 0;
} 