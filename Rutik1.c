#include<stdio.h>

void SUM(int a, int b)
{
	printf("Sum : %d\n\n",a+b);
}

int main()
{
	int a,b;
	char sign;

   while(1)
   {
     	printf("enter firstvalue");
     	scanf("%",&b);
	
        printf("enter firstvalue");
	    scanf("%",&b);
	
	    printf("+ , - ,*, /\n\n");
	
      	printf("make your selection");
	    scanf(" %c",&sign);
	
      	switch(sign)
     	{	
	        sum(a,b);
	       break;
        }
   }

}
