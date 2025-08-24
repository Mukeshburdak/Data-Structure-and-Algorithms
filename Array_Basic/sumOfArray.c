//WAP to find the sum of array elements
#include<stdio.h>
#include<stdlib.h>

void main(){
    int num;
    int *ptr,i,sum=0;  // ptr is pointer variable which store element of array.
    // sum is varible which store sum of array elements.
    // num variable which store no. of element in array.
    printf("Enter how many element do you want for sum : ");
    scanf("%d",&num);
     ptr=(int*)malloc(num*sizeof(int));
     for(i=0;i<num;i++){
        printf("\nEnter your [%d] element of array : ",i);  // user input of array element.
        scanf("%d",&ptr[i]);
     }
     for(i=0;i<num;i++){
        sum+=ptr[i];
     }
    printf("\nSum of array elements is %d",sum);
}
/* End of program */