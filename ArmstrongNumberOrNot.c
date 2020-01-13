#include <stdio.h>
#include <math.h>

int main(){ 
int k,b,g[50],c,d,y,x=0,z,q=0;
	printf("Enter a number:");
	scanf("%d",&k);
	y=k;
	while(k!=0){
	

	b=k;
	k=k/10;
	d=k*10;
    c=b-d;
    g[x]=c;    
    x++;
 
}

    z=x;
    while(x--){
    q=q+pow(g[x],z);
}


	if(y==q){
	
	printf("It's a armstrong number.\n");		
		
	}
	else{

	printf("It is'nt a armstrong number.\n");
}
	return 0;
}

