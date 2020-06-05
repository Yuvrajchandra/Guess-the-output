int main()
{
	char *str="Hello";
	printf("%d,%d\n",strlen(str),sizeof(str));
	return 0;
}


/*Output:
5,8

Explanation:
strlen gives length of the string that is 5;
sizeof gives total number of occupied memory for a variable that is 10; 
Since str is a variable with maximum number of characters 10, so sizeof will be 10.
*/
