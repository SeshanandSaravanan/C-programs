#include <stdio.h>

int main()
{
    int i = 0, no_of_element, occurrence = 1, j = 1;
    int array[100], taken_number;
    
    printf("N=");
    scanf("%d", &no_of_element);

    for (i = 0; i < no_of_element; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Sorted Array: ");
    for (i = 0; i < no_of_element; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    taken_number = array[0];
    
    for (i = 1; i < no_of_element; i++)
    {
        if (taken_number == array[i])
 {
            occurrence++;
        }
        else
        {
            if (occurrence > 1)
            {
                printf("%d->%d, ", taken_number, occurrence);
            }
            taken_number = array[i];
            occurrence = 1;
        }
    }

    if (occurrence > 1)
    {
        printf("%d->%d", taken_number, occurrence);
    }

    return 0;
}
