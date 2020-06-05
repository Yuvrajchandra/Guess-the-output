int main()
{
	int x,y;
	int *ptr;
	x=100;
	ptr=&x;
	y=*ptr;
	printf("%d\n",y);
	return 0;
}

/*
Output:
100

Explanation:
Here, y is assigned the value stored at the pointee variable, which is pointer through ptr.
*/
