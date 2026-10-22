#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score (0-100)\n");
    scanf("%d", &score);
    switch(score/10)
    {
        case 10:
        case 9:
        case 8:printf("Grade A");
               break;
        case 7:
        case 6:printf("Grade B");
               break;
        case 5:
        case 4:printf("Grade C");
               break;
        default: printf("Fail");
    }
}