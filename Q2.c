#include <stdio.h>
int main(){
    int unit,bill=100;
    scanf("%d",&unit);
    int temp = unit;
    // while (temp>0){
    //     if(temp>=50){
    //         bill=50*2;
    //         temp=temp-50;
    //         if(temp>=50){
    //             bill=bill+ (50*3);
    //             temp= temp-50;
    //             if (temp>=50){
    //                 bill=bill + (50*4);
    //                 temp=temp-50;
    //                 if(temp>=50){
    //                 bill= bill + (50*5);
    //                 temp=temp-50;
    //                 if (temp>=50){
    //                 bill =bill + (50*6);
    //                 temp=temp-50;
    //                 if (temp>=50){
    //                     bill = bill + (50*8);
    //                 }
    //             }
    //             else {
    //         bill = (temp%50)*6;
    //     }
    //      else {
    //         bill = (temp%50)*4;
    //     }
    //         }
    //         else {
    //         bill = (temp%50)*3;
    //     }
    //     }
    //     else {
    //         bill = (temp%50)*2
    //     }
    // }
printf("%d",bill);
    return 0;
}