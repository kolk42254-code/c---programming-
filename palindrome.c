#include <stdio.h>

int main()
{
    int n, sum=0, rev=0, rem, copy;
    
    printf("Enter more than 1 digit number ");
    scanf("%d", &n);
    copy = n;
    while(n>0)
    {
        rem = n % 10;
        sum += rem;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("Sum of the digit is %d\n", sum);
    printf("Reversed number of %d is %d\n", copy, rev);
    if(rev==copy)
    {
        printf("%d is equal to %d hence it is Palindrome\n", copy, rev);
    }
    else
    {
        printf("%d is not equal to %d hence it is not palindrome\n", copy, rev);
    }
    return 0;

}