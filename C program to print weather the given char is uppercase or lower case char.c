#include <stdio.h>

int main(){
char a;
	printf("enter a char");
	scanf("%c",&a);
	
	if(a>='A'||a<='Z'){
		
	printf("It is a upper case letter");
	
}           
	else if(a>='a'||a<='z'){
	printf("It is a lowercase letter");
}
	else {
	printf("It's a special char");
}
}
