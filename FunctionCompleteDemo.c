//program to demonstrate the concept of function declaration ,function call ,function defination

#include<stdio.h>

int add(int,int);        //parameter type list
int sub(int x,int y);    //complete parameter declaration

int main()
{
int a;
int b;
int sum;
int diff;

printf("Enter the value\n");
scanf("%d%d\n",&a,&b);

//function call
sum = add(a,b);
diff = sub(a,b);

printf("Result of addition is: %d\n",sum);
printf("Result of subtraction is:%d\n",diff);

}
int add(int a,int b)
{
  return a+b;
}
int sub(int a,int b)
{
  return a-b;
}
