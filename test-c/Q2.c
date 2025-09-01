#include <stdio.h>

int main (){


    printf("Enter use unit(digit): ");
    int unit,bill,total;
    scanf("%d",&unit);

    if (0<unit && 50>=unit)
    {
       bill=unit * 2;
      
    }

     if (51<=unit && 101>=unit)
    {
       bill=unit * 3;
      
       
    }

     if (101<=unit && 200>=unit)
    {
       bill=unit * 4;
       
      
    }
     if (201<=unit && 300>=unit)
    {
       bill=unit * 5;}
       
      
     if (301<=unit && 500>=unit){
       bill=unit * 6;
      
    }
      if (501<=unit ){
       bill=unit * 8;
      
    }
    
    total=bill +100;
    printf("%d",total);
    
  
    
    return 0;
    }