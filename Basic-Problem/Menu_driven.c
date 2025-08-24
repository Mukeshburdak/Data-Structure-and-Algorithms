// A menu driven program to perform the following operation. 
#include <stdio.h> 
#include <string.h> 
void main() 
{ 
int n = -1, m; 
char c[10]; 
printf("Enter the value yes for continue and no for exit : "); 
while (n != 0) 
{ 
printf("\nDo you want to continue : "); 
scanf("%s", c); 
// comparing the user input with codition. 
if (strcmp(c, "yes") == 0 || strcmp(c, "Yes") == 0 || strcmp(c, "YES") == 0) 
{ 
n = 1; 
} 
else if (strcmp(c, "No") == 0 || strcmp(c, "NO") == 0 || strcmp(c, "no") == 0) 
{ 
n = 0; 
} 
else 
{ 
printf("Enter valid value.\n"); 
n = -1; 
} 
while (n == 1) 
{ 
int numb, i, fact = 1;
            // numb= number given by user to find factorial and fact is integer variable initilize value is zero. 
            // num = number where user want fabonacci series. 
            // temp is temperory variable. 
            int num, a = 1, b = 0; 
 
            // num = number where user want fabonacci sseries. 
            // temp is temperory variable. 
            int rem; 
 
            // num = number where user want fabonacci series. 
            // temp is temperory variable. 
            int temp, sum = 0; 
 
            char c[] = "";       // declare string charcter. 
            int x, len, pro = 1; // declare integer variable. 
 
            int tem, cem; // num is variable which store amount of money. 
            // Here tem,rem cem are temprory variables 
 
            printf("for fibonacci choose 1 and for the last digit of a large fibonacci number choose 
            2 :\n"); 
            printf("for the last digit of the sum of fibonacci number choose 3 and for factorial choose 
            4 :\n"); 
            printf("for the numbers of ways  of a given word can be scrambled choose 5 and for 
            money change problem choose 6 :\n"); 
            scanf("%d", &m); 
 
            switch (m) 
            { 
            case 1: 
                // fibonacci series printing. 
                printf("\nEnter your fibonacci terms numbers: "); 
                scanf("%d", &num); 
                for (i = 0; i < num; i++) 
                { 
                    temp = a; 
                    a = b; 
                    b = temp + b; 
                    printf("%d ", a); 
                } 
                break; 
            case 2:
                            // Program to print the Last Digit of a Large Fibonacci Number. 
                printf("\nEnter your fibonacci terms numbers: "); 
                scanf("%d", &num); 
                for (i = 0; i < num; i++) 
                { 
                    temp = a; 
                    a = b; 
                    b = temp + b; 
                } 
                printf("Last number of fibonacci series is = %d\n", a); 
                rem = a % 10; // find reminder 
                printf("Last digit of last number of fibonacci series is = %d", rem); 
                break; 
 
            case 3: 
                // Program to print the Last Digit of sum of a Fibonacci Number. 
                printf("\nEnter your fibonacci terms numbers: "); 
                scanf("%d", &num); 
                for (i = 0; i < num; i++) 
                { 
                    temp = a; 
                    a = b; 
                    b = temp + b; 
                    printf("%d ", a); 
                    sum = sum + a; 
                } 
                printf("\nSum of Fibonacci Numbers is = %d", sum); 
 
                // last digit of Sum of a Fibonacci Numbers 
                rem = sum % 10; 
                printf("\nLast Digit of Sum of Fibonacci Numbers is = %d", rem); 
                break; 
 
            case 4: 
                // write a program to find factorial. 
                printf("\nEnter your number to find out factorial: "); 
                scanf("%d", &num); // taking user input. 
                for (i = 1; i <= num; i++) 
                { // Apply for loop to find factorial. 
                    fact *= i; 
                } 
                printf("your factorial of number = %d is  %d", num, fact); // printing of result. 
                  break; 
            case 5: 
                // Implement a program to print the numbers of ways a given word can be scrambled 
 
                printf("\nEnter your string value: "); 
                scanf("%s", c); 
                len = strlen(c); // using string function find length of string. 
                for (i = 1; i <= len; i++) 
                { 
                    pro *= i; 
                } 
                printf("\nNumbers of ways is = %d", pro); 
                fgetc(stdin); 
                break; 
 
            case 6: 
                // Money change problem 
                printf("\nEnter your value of money : "); 
                scanf("%d", &num); // Taking input from user. 
                rem = num % 10; 
                num = num / 10; 
                if (num != 0) 
                { 
                    printf("\nThe minimum number of coins with denominations 10 that change money 
                    is %d\n:", num); 
                    // printing of coin of 10. 
                } 
                tem = rem % 5; 
                rem = rem / 5; 
                if (rem != 0) 
                { 
                    printf("\nThe minimum number of coins with denominations 5 that change money 
                    is %d\n:", rem); 
                    // printing of coin of 5. 
                } 
                cem = tem % 1; 
                tem = tem / 1; 
                if (tem != 0) 
                { 
                    printf("\nThe minimum number of coins with denominations 1 that change money 
                    is %d\n:", tem); 
                    // printing of coin of 1. 
                } 
                printf("\nThe minimum number of coins with denominations 1,5,10 that change money 
                is  %d\n", num + rem + tem); 
                // printing of total coin of 10,5,1. 
                break; 
 
            default: 
                printf("\nWrong input"); 
            } 
            n = -1; 
        } 
    } 
} 
 
