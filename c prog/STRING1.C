// string demo

void main()
{
	char s1[80], c;
	int i=0;
	clrscr();
	printf("Enter a line of text\n");
	while((c=getchar())!='\n')
	{
		s1[i]=c;
		i++;
	}
	s1[i]='\0';
	printf("s1=%s",s1);
	puts("Enter a string");
	gets(s1);
	puts(s1);
	getch();
}