//program to calculate Area of circle

#include<stdio.h>

Circle_area(int);   //when we not specify return type of function then bydefault it consider as int

int main()
{
int radious;
float area;

printf("Enter the radious of circle \n");
scanf("%d",&radious);

area = Circle_area(radious);
printf("Area of circle is %f\n",area);

}
Circle_area(int radious)
{
  return 3.1428*radious*radious;
}

/*output
Enter the radious of circle
123
Area of circle is 47547.000000
*/