#include<stdio.h>

int input()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a;
}

int sum(int n)
{
  int ans=0;
  for(int i=1; i<=n; i++)
  {
    ans = ans + i;
  }
  return ans;
}

void output(int n, int sum)
{
    for(int i=1; i<n; i++)
    {
      printf("%d+", i);
    }
    printf("%d is %d\n", n, sum);
}

int main()
{
    int n = input();
    int s = sum(n);
    output(n, s);
    return 0;
}