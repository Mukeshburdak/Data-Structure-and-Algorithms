//Program to print the Last Digit of a Large Fibonacci Number.
#include<stdio.h>
void main(){
    //num = number where user want fabonacci sseries.
    //temp is temperory variable.
    int num,a=1,b=0,temp,i,rem;
    printf("Enter your fibonacci terms numbers: ");
    scanf("%d",&num);
    for (i=0;i<num;i++){
        temp=a;
        a=b;
        b=temp+b;
    }
    printf("Last number of fibonacci series is = %d\n",a);
    rem=a%10;//find reminder
    printf("Last digit of last number of fibonacci series is = %d",rem);
    
}