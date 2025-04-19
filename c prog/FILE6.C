// fseek() & ftell()

#include<stdio.h>
#include<conio.h>

void main()
{
	char c;
	int l, i=0;
	FILE *fp;

	//clrscr();
	fp = fopen("file1.txt","r");
	fseek(fp, 0, SEEK_END); // EOF
	l = ftell(fp);
	printf("\n Length Of the file = %d",l);

	printf("\n Contnent of the file \n");
	while(1)
	{
		fseek(fp, i, SEEK_SET);
		c = fgetc(fp);
		printf("%c",c);
		i+=2;
		if(feof(fp))
			break;
	}
	fclose(fp);
	getch();
}

