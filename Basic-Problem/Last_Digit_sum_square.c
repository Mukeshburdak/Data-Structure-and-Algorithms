/*program to print the Last Digit of the Sum of Squares of Fibonacci Numbers*/
#include<stdio.h>
void main(){
    //num = number where user want fabonacci series.
    //temp is temperory variable.
    int num,a=1,b=0,temp,i,sqsum=0,rem;
    printf("Enter your fibonacci terms numbers: ");
    scanf("%d",&num);
    for (i=0;i<num;i++){
        temp=a;
        a=b;
        b=temp+b;
        printf("%d ",a);
        sqsum=sqsum+a*a;
    }
    printf("\nSum of Squares of Fibonacci Numbers is = %d",sqsum);
    
    //last digit of Sum of Squares of Fibonacci Numbers
    rem=sqsum%10;
    printf("\nLast Digit of Sum of Squares of Fibonacci Numbers is = %d",rem);
}