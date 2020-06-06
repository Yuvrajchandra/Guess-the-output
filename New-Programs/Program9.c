int main() 
{
	printf("%d,%d,%d\n",sizeof(char*),
	sizeof(int*),sizeof(float*));;
	return 0;
}
/*
Output
8,8,8

Explanation:
No matter which kind of pointers are. Pointer variables take same bytes in the memory. 
The value may be 2, 4 or 8 depending on the computer architecture.

In our case we are using 64 bits computer architecture, so output is 8, 8, 8.
*/
