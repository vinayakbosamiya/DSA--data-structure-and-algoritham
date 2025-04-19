// File Handling getw() and putw()
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	FILE *fp;
	clrscr();
	fp = fopen("file2.txt","w");
	printf("Enter nos. one by one (13 to terminate)\n");
	while(1)
	{
		scanf("%d",&n);
		if(n==13)
			break;
		putw(n, fp);
	}
	fclose(fp);

	fp = fopen("file2.txt","r");
	printf("content of the file file2.txt\n");
	while(1)
	{
		n = getw(fp);
		if(feof(fp))
			break;
		printf("%d\t",n);
	}
	fclose(fp);
	getch();
}