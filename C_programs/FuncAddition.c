int add(int a, int b)
{
	int c;
	c = a+b;
	return(c);
}

int main()
{
	int x,y,z;
	printf("Enter two values you want to add:\n");
	scanf("%d%d",&x,&y);
	z = add(x,y);
	printf("Sum is %d",z);
}
