#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch, choice;
	int choice_int = 1;
	FILE *fp;

	fp = fopen("abc.txt", "w");
	if (fp == NULL)
	{
		printf("An error occured");
		exit(98);
	}

	while (choice_int)
	{
		puts("Enter a character:");
		ch = getchar();
		getchar();
		fputc(ch, fp);

		puts("The character has been written into the file.\nWould you like to write another character into the file? (Y) or (N)?");
		choice = getchar();
		getchar();

		if (choice == 'n' || choice == 'N')
			choice_int = 0;
		else
			choice_int = 1;
	}
	puts("Check abc.txt to access the file and see what you've written");
	fclose(fp);
	return (0);
}
