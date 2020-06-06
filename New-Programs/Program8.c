int main() 
{
	char *str="A%%B";
	printf("A%%B ");
	printf("%s\n",str);
	return 0;
}
/*Output
A%B A%%B

Explanation
printf("A%%B"); will print "A%B" because "%%" will always print "%" while str contains "A%%B" will print "A%%B" -
in this statement "%%" will not replace with single "%"*/
