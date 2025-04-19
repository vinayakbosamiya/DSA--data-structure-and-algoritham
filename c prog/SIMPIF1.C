// Print grade using simple if

void main()
{
	int m1,m2,m3,c=0;
	clrscr();
	printf("Enter marks of 3 subjects:");
	scanf("%d %d %d",&m1,&m2,&m3);
	if(m1<40)
		c++;
	if(m2<40)
		c++;
	if(m3<40)
		c++;
	if(c==0)
		printf("\n PASS");
	if(c==1)
		printf("\n ATKT");
	if(c>1)
		printf("\n FAIl");
	getch();

}