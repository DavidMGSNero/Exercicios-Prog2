#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int ct = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", ct);
            ct++;
        }
    }
    return 0;
}
