#include <stdio.h>

int main(int argc, char const *argv[])
{
    // array of size 10
    int array[10];

    // i, j -> loops
    // n -> store the nos of elements user want to store in an array
    int i, j, n, temp;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The elements in an array are as follows: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        printf("\n\nPerforming pass %d\n", i + 1);
        for (j = 0; j < n - i - 1; j++)
        {

            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

        printf("After pass %d the array arrangment is :\n", i + 1);
        for (int k = 0; k < n; k++)
        {
            printf("%d\t", array[k]);
        }
    }
    printf("\nThe sorted array after performing bubble sort in ascending order is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}

/* output 
Enter the number of elements in an array: 5
Enter the elements:
4
3
2
1
0

The elements in an array are as follows:
4       3       2       1       0

Performing pass 1
After pass 1 the array arrangment is :
3       2       1       0       4

Performing pass 2
After pass 2 the array arrangment is :
2       1       0       3       4

Performing pass 3
After pass 3 the array arrangment is :
1       0       2       3       4

Performing pass 4
After pass 4 the array arrangment is :
0       1       2       3       4

The sorted array after performing bubble sort in ascending order is :
0       1       2       3       4
*/