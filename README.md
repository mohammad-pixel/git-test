# first project

my start

## Introduction

Extract number


### Code Box 

see is digit or not

```
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
```

 

## Authors

* **ِYour Name**- [your github ID](https://github.com/mohammad-pixel)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Bullet Point

* Bullet 1
* Bullet 2
* etc
