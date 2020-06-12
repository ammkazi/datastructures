/*
 * Filename: bubble_sort.c
 * Project: sorting - bubble sort using function
 * Created Date: Wednesday, June 10th 2020, 1:23:55 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2020 Visual Labs
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // function declaration
    int bubble_sort(int[], int);
    void print_array(int[], int);

    int array[10];
    int i, j, n;

    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    print_array(array, n);

    printf("\nInitializing bubble sort...\n");
    bubble_sort(array, n);

    print_array(array, n);
    return 0;
}

int bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        printf("\n\nPerforming pass %d\n", i + 1);
        for (j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        printf("After pass %d the array arrangment is :\n", i + 1);
        for (int k = 0; k < n; k++)
        {
            printf("%d\t", arr[k]);
        }
    }
}

void print_array(int arr[], int n)
{
    printf("\nThe elements in an array are as follows: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

/* output 

*/