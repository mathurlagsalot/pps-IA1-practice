#include<stdio.h>
void input(int *a, int *b)
{
  printf("Enter two numbers\n");
  scanf("%d%d",a,b);
}

void sum(int a, int b, int *sum)
{
  *sum = a+b;
}

void output(int a, int b, int c)
{
  printf("Sum of %d + %d is %d\n",a,b,c);
}

int main()
{
  int x,y,z;
  input(&x,&y);
  sum(x,y,&z);
  output(x,y,z);
  return 0;
}
