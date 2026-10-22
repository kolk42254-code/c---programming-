#include <stdio.h>
#include <windows.h>

int main()
{
    int i, n, reg[10], s1[20], s2[20], s3[20], total[20], k;
    float avg[20], per[20];
    char name[20][30];

    printf("Enter number of students ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter your name\n");
        scanf("%s", name[i]);
        printf("Enter your register Number\n");
        scanf("%d", &reg[i]);
        printf("Enter your marks on each subject\n");
        scanf("%d%d%d", &s1[i],&s2[i],&s3[i]);
        total[i] = s1[i]+s2[i]+s3[i];
        per[i] = total[i]/300.0;
        avg[i] = total[i]/3.0;
        for(k=3;k>=1;k--)
        {
            printf("\rprocessing.... %d", k);
            fflush(stdout);
            Sleep(1000);
        }
        printf("\r                  \n");
        printf("Name of the student: %s\n", name[i]);
        printf("Register number: %d\n", reg[i]);
        printf("Score of each subject sub1: %d, sub2: %d, sub3: %d\n", s1[i], s2[i], s3[i]);
        printf("Total score: %d\n", total[i]);
        printf("Average score: %0.f\n", avg[i]);
        printf("Percentage: %2.f\n", per[i] * 100);
        if (s1[i]<=35||s2[i]<=35||s3[i]<=35)
        {
            printf("Result: Fail\n");
        }
        else
        {
            printf("Result: Pass");
        }
    }
    return 0;

}