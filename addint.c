#include <stdio.h>
 
int main()
{
   int n, sum = 0, x, array[100];
 
   scanf("%d", &n);
 
   for (x = 0; x < n; x++)
   {
      scanf("%d", &array[x]);
      sum = sum + array[x];
   }
 
   printf("Sum = %d\n",sum);
 
   return 0;
}