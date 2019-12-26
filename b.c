#include<stdio.h>

void main(){
int a,b,m;
	printf("Enter 2 numbers to find LCM");
	scanf("%d%d",&a,&b);

	if(a<b){

	m=b;
}
    else{
	
	m=a;
}
    while(1){

	if(m%a==0&&m%b==0){

	printf("The LCM is %d\n",m);
    break;
}
   ++m;

}
}


