#include<stdio.h>
int main() 
{
 int n;
 printf("Enter Number : ");
 scanf("%d", &n);

 int sum = 0;
 int temp = n;

 while(temp !=0) {
 int digit = temp % 10;
 temp = temp / 10;
 sum = sum + digit * digit * digit ;
 }

 if (sum == n) {
 printf("%d is an Armstrong Number \n", n);
}else
 {
printf("%d is Not an Armstrong Number \n", n);
 }
 return 0;
}

