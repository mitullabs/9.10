
// C program to implement Selection Sort
#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;
    printf("Enter the total Number of Elements  : \n");
    scanf("%d", &number);
    printf("Enter the Array Elements  : \n");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < number; i++) 
	{
        for(j = i + 1; j < number; j++) 
		{
            if(a[i] > a[j]) 
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe sorted elements : \n");
    for(i = 0; i < number; i++)  
	{
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}


