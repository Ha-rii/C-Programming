#include <stdio.h> 
int main() 
{     
int n, a = 1, b = 1, swap;    
printf("Enter the number of terms: ");    
scanf("%d", &n);     
n=n-2;               
printf("Fibonacci Series: "); 

    
   printf("%d", a);
   printf("%d", b);
for(int i = 1; i <= n; i++)
 
 {   swap = a + b;        
    a = b;        
    b = swap;
    printf("%d", swap);
 } 
    
 return 0; }
