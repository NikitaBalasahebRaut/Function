//program to demonstrate the concept of call by reference

#include<stdio.h>

void swap(int*,int*);

int main()
{
  int a = 10;
  int b = 20;
  
  printf("Before swap values of a and b are: %d\t%d\n",a,b);
  swap(&a,&b);
}

void swap(int *x,int *y)
{
 *x = *x+*y;
 *y = *x-*y;
 *x = *x-*y;
printf("After swap values of a and b are:%d\t%d\n",*x,*y);
 }
 
 /*output
 Before swap values of a and b are: 10   20
After swap values of a and b are:20     10
*/