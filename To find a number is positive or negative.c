#include <stdio.h>

int main(){
int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<0){
	
	printf("It is negative number.");

}
	else if(a>0){

	printf("It is positive number.");
}
else{
	printf("It's neither (+ve),nor(-ve)");
}
}
