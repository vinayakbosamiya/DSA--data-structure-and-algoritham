// Linear search
#define size 10
void main()
{
	int a[size], i, s, flag = 0;
	clrscr();
	for(i=0 ; i<size ; i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter Search value:");
	scanf("%d",&s);

	for(i=0 ; i<size ; i++)
	{
		if(a[i]==s)
		{
			printf("\n %d is at %d position",s, i+1);
			flag = 1;
		}
	}
	if(flag == 0)
		printf("\n %d Not Found",s);
	getch();
}