#include <stdio.h>
int main()
{
  int n;
  int sum = 0;
  printf("Enter a Number: ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
    printf("%d", i);
    
    if (i < n)
      printf("+");
  }
  
  printf("= %d", sum);
  return 0;
}
