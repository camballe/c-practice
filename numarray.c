#include <stdio.h>
#include <math.h>

int arraySize, i;

int sort(int array[arraySize])
{
    int i, j, a;
    for (i = 0; i < arraySize; i++)
    {
        for (j = i + 1; j < arraySize; j++)
        {
            if (array[i] < array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    printf("The descending order  is:");

    for (i = 0; i < arraySize; i++)
    {

        printf(", %d", array[i]);
    }
}

int minNum(int array[arraySize])
{
    int min = array[0];

    for (i = 1; i < arraySize; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    printf("The minimum number is %d\n", min);
}

int maxNum(int array[arraySize])
{
    int max = array[0];

    for (i = 1; i < arraySize; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    printf("The maximum number is %d\n", max);
}

int avgNum(int array[arraySize])
{

    float avg, sum = 0;

    for (int i = 0; i < arraySize; i++)
    {
        sum = sum + array[i];
    }
    avg = (float)sum + array[i];

    return avg;
}

int stdNum(int array[arraySize])
{

    int mean, stDev, deviations[arraySize], sum = 0;
    mean = avgNum(array);

    for (i = 0; i < arraySize; i++)
    {
        deviations[i] = (array[i] - mean) * (array[i] - mean);
        sum = sum + deviations[i];
    }
    stDev = sqrt(sum / arraySize);
    printf("The standard deviation is %d\n", stDev);
}

int main()

{
    int operation;
    printf("1.Sort numbers in descending order \n2.Get the minimum number \n3.Get the maximum number \n4.Get the average of the number \n5.Get the standard deviation of the numbers in the array");
    printf("\nChoose an operation to perform");
    scanf("%d", &operation);

    printf("\nEnter the array size");
    scanf("%d", &arraySize);

    int array[arraySize];
    printf("\nProceed to enter the numbers");
    for (i = 1; i <= arraySize; i++)
    {
        printf("Enter number %d:", i);
        scanf("%d", &array[i]);
    }

    switch (operation)
    {
    case 1:

        int sorting = sort(array);
        break;

    case 2:
        int minimumNumber = minNum(array);
        break;

    case 3:
        int maximumNumber = maxNum(array);
        break;

    case 4:
        float averageNum = avgNum(array);
        printf("The average is %d", averageNum);
        break;

    case 5:
        float StandardDev = stdNum(array);
        break;

    default:
        printf("You have selected an invalid choice 1-5");
        break;
    }
}
