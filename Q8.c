int a; 
int b;
char c='s' ;
    scanf("%d ",&a);
    scanf("%d",&b);     
    switch(c){     
    case'+':printf("%d ",a+b);        
    break;        
    case'-':printf("%d ",a-b); 
    break;                 
    case'%':printf("%d ",a%b);         
    break;         
    case'*':printf("%d ",a*b);         
    break;        
    case'/':printf("%d ",a/b);         
    break;        
     default:printf("Enter valid operator");
    break;                 
  }
}