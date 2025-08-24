//write a program to find factorial
#include<stdio.h>
void main(){
    int num,i,fact=1;//num= number given by user to find factorial and fact is integer variable initilize value is zero
    printf("Enter your number to find out factorial: ");
    scanf("%d",&num);//taking user input.
    for(i=1;i<=num;i++){//Apply for loop to find factorial.
        fact*=i;
    }
    printf("your factorial of number = %d is  %d",num,fact);//printing of result.
}