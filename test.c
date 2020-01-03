#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <ctype.h>

#define SIZE 1000000

int ismydigit(char str[])

{
	
	int i;
	
	if(str[0]=='0')
	
	{
		
		if(str[1]=='\0')
		
		{
			
			return 1;
		}
		
		else
		
		{
			
			return 0;
		}
	}
	
	else
	
	{
	
	for(i=0; str[i]!='\0'; i++)
	
	{
		
		if(isdigit(str[i])==0)
		
		{
			
			return 0;
		}	
	}
	
	return 1;
    
	}
	
}

int main()

{
	
	char A[SIZE], B[SIZE], *t[SIZE], *isa[SIZE], *isd[SIZE];
	
	unsigned long int i, j, k, x=0, y=0, flagd=0, flaga=0, flag=0;
	
	gets(A);
	
	for(i=0; A[i]!='\0'; i++)
	
	{
		
		if(A[i]==';')
		
		{
			
			A[i]=',';
		}
	}
	
	for(i=0, j=0; A[i]!='\0'; i++, j++)
	
	{
		if(i==0&&A[i]==',')
		
		{
			
			B[j]='_';
			
			j++;
			
			B[j]=A[i];
			
			if(A[i+1]==','||A[i+1]=='\0')
			
			{
				
				B[j]=A[i];
				
				j++;
				
				B[j]='_';
			}
		}
		
		else
		
		{
			
        if((A[i]==','&&A[i+1]==',')||(A[i]==','&&A[i+1]=='\0'))
        
        {
        	
        	B[j]=A[i];
        	
        	j++;
        	
        	B[j]='_';
		}
		
		else
		
		{
			
			B[j]=A[i];
		}
		
	    }
	}
	
	B[j]='\0';	
		
	i=0;
	
	t[i]=strtok(B, ",");
	
	while(t[i]!=NULL)
	
	{
	
	
		
		i++;
		
		t[i]=strtok(NULL, ",");
	}
	
	for(k=0; k<i; k++)
	
	{
		
		if(ismydigit(t[k]))
		
		{
			flagd++;
			
			isd[x]=t[k];
			
			x++;
		}
		
		else
		
		{
			flaga++;
			
			isa[y]=t[k];
			
			y++;
		}
	}
	
	if(flagd)
	
	{
		
		printf("\"");
			
		for(i=0; i<x; i++)
		
		{
			

		    printf("%s", isd[i]);
			
			if(i+1!=x)
			
			{
				
				printf(",");
			}
		}
		
		printf("\"");
	}
	
	else
	
	{
		
		printf("-");
	}
	
	printf("\n");
	
	if(flaga)
	
	{
		printf("\"");
		
		for(i=0; i<y; i++)
		
		{	
		
	    if(strcmp(isa[i], "_")!=0)
		
		{
			
			printf("%s", isa[i]);
		}
		
		if(i+1!=y)
		
		{
			
			
			printf(",");
		}
		 

		}
		
		printf("\"");
	}
	
	else
	{
		
		printf("-");
	}
	
}
