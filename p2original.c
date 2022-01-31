#include<stdio.h>
int input()
{
  int a;
  printf("Enter two numbers\n");
  scanf("%d", &a);
  return a;
}

int add(int x, int y)
{
  int sum;
  sum=x+y;
  return sum;
}

int output(int a, int b, int c)
{
  printf("Sum of the two numbers %d and %d is = %d\n", a, b, c);
  return 0;
}
int main()
{
  int h,n1,n2;
  n1=input();
  n2=input();
  h=add(n1,n2);
  output(n1,n2,h);
  return 0;
}