#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int s=N-1;
    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        s--;
     
        printf("\n");

    }
    for (int i = N; i > 0; i--)
    {

        for (int j = 1; j <= N-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        s++;

        printf("\n");
    }
    return 0;
}


// Given a number N. Print a pyramid that has N rows.

// For more clarification see the example below.

// Input
// Only one line containing a number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.
// input -> 4

// output ->
//    *
//   ***
//  *****
// *******