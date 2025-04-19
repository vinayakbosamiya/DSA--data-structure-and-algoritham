
// File Handling Read and write char fgetc(), fputc()
#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	FILE *fp;
	clrscr();
	fp = fopen("d:\\brijesh\\file1.txt","w");
	printf("Enter content of the file(ctrl + z to terminate)\n");
	while((c=getchar())!=EOF)
	{
		fputc(c, fp);
	}
	fclose(fp);

	fp = fopen("d:\\brijesh\\file1.txt","r");
	printf("content of the file file1.txt\n");
	while(1)
	{
		c = fgetc(fp);
		if(feof(fp))
			break;
		printf("%c",c);
	}
	fclose(fp);
	getch();
}