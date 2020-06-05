void test(struct number n)
{
	n.x=100;
}
struct number{ int x; };

int main()
{
	struct number num;
	test(num);
	printf("%d\n",num.x);	
	return 0;
}
/*Output:
error: parameter 1 ('n') has incomplete type

Explanation:
Structure number should be defined before test function definition.
*/
