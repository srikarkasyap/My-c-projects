#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Enter a number: "); 
	scanf("%d",&a);	

	if(a<0){
		printf("Factorial of negative number doesn't exists.\n");
		
	}
	
	b = 1; 
	for (a=a;a>1;a--){
		b = b* a;
		
	}
	
	printf("Factorial is %d\n", b);
}
    
