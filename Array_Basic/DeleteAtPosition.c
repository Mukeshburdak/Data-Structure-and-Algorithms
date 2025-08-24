/*WAP to delete an existing element from a given location of
  the array.*/

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
     //location is given where to delete a element.
     printf("\nEnter loction of element at which place to delete : ");
     scanf("%d",&m);
     //Main steps.
     i=m;
     while(i<=num){
      ptr[i]=ptr[i+1];
      i=i+1;
     }
     num=num-1;//Increase Array size.

     //Printing array after deleting of existing elements.
     printf("\n{");
     for(i=0;i<num;i++){
        printf("%d, ",ptr[i]);
     }
     printf("}");
}