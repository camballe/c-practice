#include <stdio.h>
int main()
{
    int percentagePass, i, sum = 0, marks[11], subsPerGrade[] = {0, 0, 0, 0, 0};
    double mean;
    char grades[11], baseGrades[] = {'A', 'B', 'C', 'D', 'E'};

    for (i = 1; i <= 10; i++)
    {
        printf("Enter marks for Subject %d\n", i);
        scanf("%d", &marks[i]);

        if ((marks[i] >= 70) && (marks[i] <= 100))
        {
            grades[i] = 'A';
            subsPerGrade[0]++;
        }
        else if ((marks[i] >= 60) && (marks[i] < 70))
        {
            grades[i] = 'B';
            subsPerGrade[1]++;
        }
        else if ((marks[i] >= 50) && (marks[i] < 60))
        {
            grades[i] = 'C';
            subsPerGrade[2]++;
        }
        else if ((marks[i] >= 40) && (marks[i] < 50))
        {
            grades[i] = 'D';
            subsPerGrade[3]++;
        }
        else if ((marks[i] < 40) && (marks[i] >= 0))
        {
            grades[i] = 'E';
            subsPerGrade[4]++;
        }
        else
        {
            printf("Oops!! Marks must be from 0 to 100.\n");
            return 1;
        }

        sum = sum + marks[i];
    }

    printf("SUBJECT             MARKS           GRADE\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Subject %d             %d             %c\n", i, marks[i], grades[i]);
    }
    printf("\nTOTAL: %d marks\n", sum);
    mean = (float)sum / 10;
    printf("MEAN: %f\n", mean);
    printf("Number of subjects failed: %d\n", subsPerGrade[4]);

    if (subsPerGrade[4] == 0)
    {
        printf("Proceed to the next level\n");
    }
    else if ((subsPerGrade[4] == 1) || (subsPerGrade[4] == 2))
    {
        printf("Take supplementary exam in the failed units\n");
    }
    else if ((subsPerGrade[4] == 3) || (subsPerGrade[4] == 4))
    {
        printf("Repeat the failed units\n");
    }
    else if ((subsPerGrade[4] == 5) || (subsPerGrade[4] == 6))
    {
        printf("Repeat the whole semester\n");
    }
    else
    {
        printf("Discontinue from the course\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("%c = %d\n", baseGrades[i], subsPerGrade[i]);
    }

    percentagePass = (10 - subsPerGrade[4]) * 10;
    printf("Percentage pass: %d%%\n", percentagePass);
    return 0;
}