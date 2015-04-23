#include <stdio.h>
 
int main()
{
   int n, sum = 0, a, temp[100];
 
   scanf("%d", &n);
 
   for (a = 0; a < n; a++)
   {
      scanf("%d", &temp[a]);
      sum = sum + temp[a];
   }
 
   printf("Sum = %d\n",sum);
 
   return 0;
}