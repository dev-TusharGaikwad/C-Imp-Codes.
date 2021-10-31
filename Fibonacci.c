//------------------------------- FIBONACCI -------------------------------------//

#include<stdio.h>


int fibonacci(int input1)
{
	int fibo=0, n1=0,n2=1;
	if( input1 == 0 || input1 == 1) 
		return input1;
	else
		fibo = n1 + n2;
	for (int i = 3; i <= input1; ++i)
	{
		n1 = n2;
		n2 = fibo;
		fibo = n1 + n2;
	}

	return fibo;
}


int main()    
{    
	// fibinacci series upto 'nth' number
	int num_1=0,num_2=1,num_3,i,user_input;    
	printf("Enter the number of elements:");    
	scanf("%d",&user_input);    
	
	printf("Fibonacci series from '%d' elements:",user_input); 
	printf("\n%d  %d",num_1,num_2);    
	for(i=2;i<user_input;++i)// i=2 first two numbers are already printed    
	{    
		num_3=num_1+num_2;    
		printf("  %d",num_3);    
		num_1=num_2;    
		num_2=num_3;    
	}  
	
	print(fibonacci(user_input));
	
	return 0;  
}    
