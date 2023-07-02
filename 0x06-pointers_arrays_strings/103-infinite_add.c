#include "main.h"
#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i, j, k;

    if (len1 == 0 || len2 == 0 || size_r <= len1 || size_r <= len2)
        return 0;

    i = len1 - 1;
    j = len2 - 1;
    k = size_r - 1;

    while (i >= 0 || j >= 0)
    {
        int sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';

        if (j >= 0)
            sum += n2[j] - '0';

        r[k] = sum % 10 + '0';
        carry = sum / 10;

        i--;
        j--;
        k--;
    }

    if (carry)
    {
        if (k < 0)
            return 0;
        r[k] = carry + '0';
    }

    return r + k + 1;
}
