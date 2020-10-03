#include <stdio.h>
int main()
{
   int a=4,b=5; 
   printf("Before swapping:");  // a=4 b=5


   printf("a=%d \n b=%d",a,b);
   a= a+b;                      // a = 4+5 = 9

   b= a-b;                      // b = 9-5 = 4

   a= a-b;                      // a = 9-4 = 5


   printf("After swapping:");
   printf("a=%d \n b=%d",a,b);  // a=5 b=4
      return 0;
}
