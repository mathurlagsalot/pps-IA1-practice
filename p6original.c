#include<stdio.h>
void input(char *str1, char *str2)
{
  printf("Enter a string: ");
  scanf("%s",str1);
  printf("Enter a string: ");
  scanf("%s",str2);
}

int cmp(char *str1, char *str2)
{ 
  int i;
  for(i = 0; str1[i] && (str1[i] == str2[i]); i++)
  {
    return str1[i] - str2[i] ;
  }
}

void output(char *str1, char *str2, int res)
{
  if(res < 0)
  {
    printf("%s is greater than %s", str2, str1);
  }
  else if(res > 0)
  {
    printf("%s is greater than %s", str1, str2);
  }
  else
  {
    printf("Strings are equal");
  }
}

int main()
{
  char str1[50], str2[50];
  int result;
  input(str1, str2);
  result = cmp(str1, str2);
  output(str1, str2, result);
  return 0;
}
