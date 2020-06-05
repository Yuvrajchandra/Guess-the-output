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
sizeof gives total number of occupied memory for a variable that is 8;
since str is a pointer so sizeof(str) may be 2,4 or 8. 
It depends on the computer architecture.
*/
