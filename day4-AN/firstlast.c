#include <stdio.h>

int main()
{
	int n,x,i,j=0;
	int arr[100],k[100];
	printf("N = ");
	scanf("%d",&n);
	printf("X = ");
	scanf("%d",&x);
	for (i = 0; i < n; i++) 
	{
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    printf("a[] = {");
    for (i = 0; i < n; i++) 
	{
        printf("%d", arr[i]);
        if (i < n - 1) 
		{
            printf(", ");
        }
    }
    printf("}\n");
    for(i=0;i<n;i++)
    {
		if(arr[i] == x)
    		{
    			k[j] = i;
    			j++;
			}
	}
	if (k[0] == '\0') 
	{
    	printf("-1\n");
  	} 
	else 
	{
  		printf("First element: %d\n", k[0]);
  		printf("Last element: %d\n", k[j-1]);
  	}
	return 0;
}
