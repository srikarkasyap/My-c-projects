#include <stdio.h>

int main(){
int a;				
	printf("Enter a year");			
	scanf("%d",&a);		
	
	if(a%400==0){
	printf("It's a leapyear");
}
	else if(a%100==0){
	printf("It's a leapyear");
}
	else if(a%4==0){
	printf("It's a leapyer");
}
	else{
	printf("It's not a leapyear.");
}
}
