#include<iostream>
#include<conio.h>
#include<stdio.h>

main()
{
printf("PROGRAM ARAY B BERISI ARAY A\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

int a, s[5] = {}, c[5];
printf ("array A\n");
printf("0 1 2 3 4 5 \n");
for(a=0;a<5;a++)
{
	scanf("%i",&s[a]);

}
for(a=0;a<5;a++)
{
	c[a]+s[a];
}

printf("\n");
printf("array B\n");
for(a=0;a<5;a++)
{
	printf("%2i",c[a]);
	scanf("%d",&a);
	if(a%2==0);
	{printf("%d adalah bilangan genap\n\n",a);
	}
}
return 0;
}
