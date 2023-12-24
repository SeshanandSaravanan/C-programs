#include <stdio.h>

int main() 
{
    int no_of_element, i, j;
    int element[100], a[100], repeated[100] = {0}; 
    printf("N = ");
    scanf("%d", &no_of_element);

    for (i = 0; i < no_of_element; i++) 
	{
        printf("Enter element:");
        scanf("%d", &element[i]);
    }

    printf("a[] = {");
    for (i = 0; i < no_of_element; i++) 
	{
        printf("%d", element[i]);
        if (i < no_of_element - 1) 
		{
            printf(", ");
        }
    }
    printf("}\n");

    printf("Repeated elements: ");
    int found = 0;

    for (i = 0; i < no_of_element; i++) 
	{
        for (j = i + 1; j < no_of_element; j++) 
		{
            if (element[i] == element[j] && repeated[j] == 0) 
			{
                repeated[j] = 1; 
                if (found > 0) 
				{
                    printf(", ");
                }
                printf("%d", element[i]);
                found++;
            }
        }
    }

    if (found == 0) 
	{
        printf("-1\n");
    } else 
	{
        printf("\n");
    }

    return 0;
}

