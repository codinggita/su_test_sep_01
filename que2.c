 #include<stdio.h>
 int main(){
    int unit;
    scanf("%d",&unit);

    if (unit>=0&&unit<=50){printf(" %d rupees 2 per unit",unit);}
 else if (unit>=52&&unit<=100){printf("%d rupee 2 per unit",unit);}
 else if(unit>=101&&unit<=200){printf("%d ruppes 4 per unit",unit);}
 else if(unit>=201&&unit<=300){printf("%d ruppes 5 per unit",unit);} 
 else if(unit>=301&&unit<=500){printf("%d ruppes 6 per unit",unit);}
 else {printf("%d worng out put");}

 return 0;
 }
 