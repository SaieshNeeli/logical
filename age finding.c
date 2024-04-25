#include<stdio.h>
int main()
{
	int i=1,k,al15=0,al30=0,al45=0;
	while(i<=100)
	{
		printf("enter your age");
		scanf("%d",&k);
		if(k<=15)
		{
			al15++;
		}
		else if(k<=30)
		{
			al30++;
		}
		else if(k<45)
		{
			al45++;
		}
		else
		{
			i=101;
		}
		i++;
	}
	printf("\n%d falls under age less than 15\n%d falls under the age less than 30\n%d falls under the age less than 45",al15,al30,al45);
		
	    
	    
		
	
	return 0;
}
