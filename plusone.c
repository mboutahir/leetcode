#include <stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    int j;
    int total = 0;

*returnSize = digitsSize;
j = digitsSize - 1;
while( j >= 0)
{
    if(digits[j] == 9)
    {
        digits[j] = 0;
    }
    else if(digits[j] != 9)
    {
        digits[j] += 1; 
        return digits;
    }
    j--;
}
*returnSize = digitsSize + 1;
int *n = malloc(*returnSize * sizeof(int));
j = digitsSize - 1;
i= *returnSize - 1;
while(i > 0)
{
    n[i] = 0;
    i--;
}
 n[0] = 1;
return(n);
}