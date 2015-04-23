#include <stdio.h>
 
int main()
{
   int n, sum = 0, a, array[100];
 
   scanf("%d", &n);
 
   for (a = 0; a < n; a++)
   {
      scanf("%d", &array[a]);
      sum = sum + array[a];
   }
 
   printf("Sum = %d\n",sum);
 
   return 0;
}