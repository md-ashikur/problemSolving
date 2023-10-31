#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != s[strlen(s) - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    int p = is_palindrome(s);
    if (p == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}