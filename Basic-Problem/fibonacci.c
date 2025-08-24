//fibonacci series printing limted 0<=n<=45.
#include<stdio.h>
void main(){
    //num = number where user want fabonacci sseries.
    //temp is temperory variable.
    int num,a=1,b=0,temp,i;
    printf("Enter your fibonacci terms numbers between 0<=n<=45 : ");
    scanf("%d",&num);
    if(num<0||num>45){
        printf("Please give input in range :");
        printf("Enter your fibonacci terms numbers between 0<=n<=45 : ");
        scanf("%d",&num);
    }
    for (i=0;i<num;i++){
        temp=a;
        a=b;
        b=temp+b;
        printf("%d ",a);
    }
}