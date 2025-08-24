//program to print the Sum of Fibonacci Numbers
#include<stdio.h>
void main(){
    //num = number where user want fabonacci sseries.
    //temp is temperory variable.
    int num,a=1,b=0,temp,i,sum=0;//sum variable assign value is zero.
    printf("Enter your fibonacci terms numbers: ");
    scanf("%d",&num);
    for (i=0;i<num;i++){
        temp=a;
        a=b;
        b=temp+b;
        printf("%d ",a);
        sum=sum+a;   
    }
    //Sum of Fibonacci Numbers.
    printf("\nSum of Fibonacci Numbers is = %d",sum);
    printf("\n Last Digit of sum of Fibonacci Series = %d ",sum%10)
}