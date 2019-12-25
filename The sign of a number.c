#include <stdio.h>

int main(){
	
	printf("Enter a real number:");
    scanf("%d",&a);
	
	if(a<0){
	printf("The number is negative");
}
else if(a==0){
	printf("The number is zero or null");
}
else{
	printf("The number is positive");
}
}
