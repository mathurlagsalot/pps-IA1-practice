#include<stdio.h>

float input()
{
  float n;
  printf("Enter a number to find the sqaure root of: ");
  scanf("%f", &n);
  return n;
}

float sr(float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while (x - y > e)
  {
    x  = (x + y) / 2;
    y = n / x; 
  }
  return x;
}
void output(float n, float sr_res)
{
  printf("Square root of given input %0.2f is = %0.2f \n", n, sr_res);
}

int main()
{
  float n, sr_res;
  n = input();
  sr_res = sr(n);
  output(n, sr_res);
  return 0;
}