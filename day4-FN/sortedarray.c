#include <stdio.h>

int main() {
    int no_of_element1, no_of_element2, i, j;
    int element1[100], element2[100];
    
    printf("N = ");
    scanf("%d", &no_of_element1);

    for (i = 0; i < no_of_element1; i++) 
	{
        printf("Enter element:");
        scanf("%d", &element1[i]);
    }

    printf("Array 1: {");
    for (i = 0; i < no_of_element1; i++) 
	{
        printf("%d", element1[i]);
        if (i < no_of_element1 - 1) 
		{
            printf(", ");
        }
    }
    printf("}\n");

    printf("M = ");
    scanf("%d", &no_of_element2);

    for (i = 0; i < no_of_element2; i++) 
	{
        printf("Enter element:");
        scanf("%d", &element2[i]);
    }

    printf("Array 2: {");
    for (i = 0; i < no_of_element2; i++) 
	{
        printf("%d", element2[i]);
        if (i < no_of_element2 - 1)
		{
            printf(", ");
        }
    }
    printf("}\n");

    printf("Union of Arrays: {");
    i = 0; 
    j = 0; 
    for (; i < no_of_element1 && j < no_of_element2; ) 
	{
        if (element1[i] < element2[j]) 
		{
            printf("%d", element1[i]);
            i++;
        } 
		else if (element1[i] > element2[j]) 
		{
            printf("%d", element2[j]);
            j++;
        } 
		else 
		{
            printf("%d", element1[i]);
            i++;
            j++;
        }        
    }
    for (; i < no_of_element1; i++) {
        printf("%d", element1[i]);
    }
    for (; j < no_of_element2; j++) {
        printf("%d", element2[j]);   
    }
    printf("}\n");
    return 0;
}

