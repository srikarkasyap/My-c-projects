#include <stdio.h>

int main(){
int a,g[100],i,b,c,d,k;
	printf("Enter a number:");
	scnaf("%d",&a);

	 for(i=0;i<=50;i++)
   {
      b=a;
       a=a/10;
       
       d=a*10;
       c=b-d;
       g[i]=c;
       if(a==0)
       {
          break;
       }
   }
   		 while(i--)
    {
        printf("%d",g[i]);   
    }

}
