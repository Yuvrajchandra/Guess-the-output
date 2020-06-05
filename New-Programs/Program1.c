int main()
{
	int color=2;
	switch(color)
	{
		case 0: printf("Black");
		case 1: printf("Blue");
		case 2: printf("Green");
		case 3: printf("Aqua");
		default: printf("Other");
	}
	return 0;
}





/*Output

GreenAquaOther

Explanation:

There are no break statements, so all the statements after case 2 will be executed including default statement.*/
