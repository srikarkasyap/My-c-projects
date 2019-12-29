#include <stdio.h>

int main(){
		int n;
		int m;
  	printf("Enter 2 numbers");	
	scanf("%d%d",&n,&m);

	if(m<n){
	printf("%d is greater than %d",n,m);
}
	else if(m>n){
	printf("%d is greater than %d",m,n);
}	
	else if(m==n){
	printf("Both numbers are equal");
}
	else{
	printf("Error!");
}
    return 0;
}
