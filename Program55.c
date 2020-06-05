int main()
{
	int x[10]={0,1,2,3,4,5,6,7,8,9};
	int *ptr1,*ptr2;
	ptr1=&x[0];
	ptr2=&x[5];
	
	printf("%p\n",(ptr1+ptr2));
	
	return 0;
}




/*Output

error: invalid operands to binary + (have 'int *' and 'int *')

Explanation:

Error in the statement printf("%p\n",(ptr1+ptr2));

Addition of two pointers is not allowed.*/
