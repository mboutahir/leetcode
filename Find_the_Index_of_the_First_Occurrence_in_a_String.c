#include <stdio.h>
int strStr(char* haystack, char* needle) {
    int i;
    int j;
    int k = 0;

    i = 0;
    j = 0;
    int flag = -1;
    while(haystack[i])
    {
        j = 0;
            while(needle[j] == haystack[i + j])
            {
                j++;
                if(needle[j] == '\0')
                    return i;
            }
        i++;
    }
        return -1;
}