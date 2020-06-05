int main()
{
	if(0);
		printf("Hello");
	printf("Hi");
	return 0;
}







/*
Output:
HelloHi

Explanation:
There is a semicolon after the if statement, so this statement will be considered as separate statement; 
and here printf("Hello");
will not be associated with the if statement.
Both printf statements will be executed.
*/
