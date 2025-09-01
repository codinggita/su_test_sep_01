int j;
int r=0;
for (int i=456;i>0;i/=10){
    j=i%10;
    r+=j;
  } 
  printf("%d",r);
return 0;
}