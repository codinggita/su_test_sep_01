    #include<stdio.h>
    int main(){
        int num,r,degit,c;
        printf("enter a number- ");
        scanf("%d",&num);
        c=num;

        r=0;
        int i=num;
        while(i>0){
        degit=i%10;
        r=r*10+degit;
        i/=10;
        }
        if(r==c){
            printf("%d is a Palindrome\n",r);
        }
        else{
            printf("%d is not Palindrome\n",r);
        }
        
      
        return 0;
    }
    
