//WAP to insert an new element of a given location in an array.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int num,m; // m is variable which store place where new element is insert.
    int *ptr,i;  // ptr is pointer variable which store element of array.
    // num variable which store no. of element in array.
    printf("Enter how many element do you want for array : ");
    scanf("%d",&num);
     ptr=(int*)malloc(num*sizeof(int));

     for(i=0;i<num;i++){
        printf("\nEnter your [%d] element of array : ",i);  // user input of array element.
        scanf("%d",&ptr[i]);
     }
     //printing of array elements.
     printf("\n{");
     for(i=0;i<num;i++){
        printf("%d, ",ptr[i]);
     }
     printf("}");

     //location is given.
     printf("\nEnter new element at which place : ");
     scanf("%d",&m);
     //Main steps.
     i=num;
     while(i>=m){
      ptr[i+1]=ptr[i];
      i=i-1;
     }
     printf("\nEnter new element of array : ");// insertion of new element.
     scanf("%d",&ptr[m]);
     num=num+1;//Inertion Array size.

      //printing of new array elements.
      printf("\n{");
     for(i=0;i<num;i++){
        printf("%d, ",ptr[i]);
     }
     printf("}");
}
//Exit.