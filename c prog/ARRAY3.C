// One dimenisional array Memory Allocation

void main()
{
	int a[5], i;
	clrscr();
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Index \t Value \t Address");
	for(i=0 ; i<5 ; i++)
		printf("\n %d \t %d \t %u",i+1, *(a+i), (a+i)); // a[i] &a[i]

	getch();
}