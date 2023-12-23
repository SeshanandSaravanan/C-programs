#include <stdio.h>

int main()
{
	int n=3,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" %d",(i - 1) * 3 + j);
		}
		printf("\n");
	}
	return 0;
}