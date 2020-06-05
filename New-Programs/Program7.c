int main() 
{
	int val=1;
	
	do{ 
		val++; 
		++val;
	}while(val++>25); 
	
	printf("%d\n",val); 
	
	return 0;
}
/*
Output:
4

Explanation:
Here, do while loop executes once and then it will check condition while will be false meanwhile value will be increased 3 times 
(two times in do while body and once while checking the condition); hence value will be 4.
*/
