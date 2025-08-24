//Money change problem  
#include<stdio.h> 
void main(){ 
int num,rem,tem,cem;  //num is variable which store amount of money. 
// Here tem,rem cem are temprory variables 
printf("Enter your value of money : "); 
scanf("%d",&num);   // Taking input from user. 
rem=num%10; 
num=num/10; 
if(num!=0){ 
printf("\nThe minimum number of coins with denominations 10 that change money bv 
is   %d\n:",num); 
// printing of coin of 10. 
} 
tem=rem%5; 
rem=rem/5; 
if(rem!=0){ 
printf("\nThe minimum number of coins with denominations 5 that change money   bn 
is   %d\n:",rem); 
// printing of coin of 5. 
} 
cem=tem%1; 
tem=tem/1; 
if(tem!=0){ 
printf("\nThe minimum number of coins with denominations 1 that change money 
is                                
%d\n:",tem); 
// printing of coin of 1. 
} 
printf("\nThe minimum number of coins with denominations 1,5,10 that change money         
is  %d\n",num+rem+tem); 
// printing of total coin of 10,5,1. 
}