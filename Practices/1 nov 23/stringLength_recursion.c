// string length using recursion
#include <stdio.h>

int stringLength(char arr[], int i)
{
    if (arr[i] == '\0')
    {
        return 0;
    }
    int l = stringLength(arr, i + 1);
    return l + 1;
}
int main()
{
    char arr[1001];
    scanf("%s", arr);
    int len = stringLength(arr, 0);
    printf("%d", len);
    return 0;
}