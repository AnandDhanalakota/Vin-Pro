/* program to generate the reverse of the given string */
#include<stdio.h>
main()
{
	char a[20],b[20];int i,j;
	printf("\nEnter the string:");
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
		j=i;
	for(i=0;a[i]!=0;i++)
		b[i]=a[j-i];
	b[i]='\0';
	printf("%s",b);
	getch();
}