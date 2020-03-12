#include <stdio.h>
int main() 
{
	int a, b;
    printf("Input the Coordinate(a,b): ");
	printf("\n a: "); 
    scanf("%d", &a);
    printf(" b: ");
    scanf("%d", &b);
    
		if(a>0 && b>0) 
		{
			printf("Quadrant-1st(+,+)\n");
		} 
		else if(a>0 && b<0) 
		{			
		   	printf("Quadrant-2nd(+,-)\n");
		} 
		else if(a<0 && b<0) 
		{
				printf("Quadrant-3rd(-,-)\n");
		} 
		else if(a<0 && b>0) 
		{
			printf("Quadrant-4th(-,+)\n");
		}
	return 0;
