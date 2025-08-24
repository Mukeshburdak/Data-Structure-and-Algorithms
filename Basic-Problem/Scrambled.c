// Implement a program to print the numbers of ways a given word can be scrambled. 
#include<stdio.h> 
#include<string.h> 
void main(){ 
char c[50];//declare string charcter. 
int x,len,i,pro=1;//declare integer variable. 
printf("Enter your string value: "); 
scanf("%s",c); 
len=strlen(c); //using string function find length of string. 
for(i=1;i<=len;i++){ 
pro*=i; 
} 
printf("\nNumbers of ways is = %d",pro); 
// find factorial of len which is number of ways a given wortd can be scrambled. 
} 