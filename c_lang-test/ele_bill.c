#include <stdio.h>
int main(){
    float units;
    printf("Enter units consumed:");
    scanf("%f",&units);
    float calc;
    if(units <= 50)
    {
        calc=units*2;
    }
    else if(units > 50 && units <= 100)
    {
        calc = 50*2;
        calc = calc+(100-50)*3;
    }
    else if(units > 100 && units <= 200)
    {
        calc = (50*2)+(50*3)+((units-100)*4);
    }
    else if(units > 200 && units <= 300)
    {
        calc = (50*2)+(50*3)+(100*4)+((units-200)*5);
    }
    else if(units > 300 && units <= 500){
        calc = (50*2)+(50*3)+(100*4)+(100*5)+((units-300)*6);
    }
    else {
        calc=(50*2)+(50*3)+(100*4)+(100*5)+(200*6)+((units-500)*8);
    }
    

    printf("Your Eletricity bill:%f",calc);

    return 0;
}