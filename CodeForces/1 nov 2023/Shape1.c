#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int k = N;
    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }
    return 0;
}


// Given a number N. Print a face down right angled triangle that has N rows.

// For more clarification see the example below.

// Input
// Only one line containing a number N (1 ≤ N ≤ 99).

// Output
// Print the answer according to the required above.

// input -> 4
// output ->
// ****
// ***
// **
// *