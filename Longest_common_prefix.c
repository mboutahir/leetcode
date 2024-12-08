#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0;
    int j = strlen(strs[0]);
    int k = 0;
    int len;

    while(i + 1 < strsSize)
    {
        j = 0;
        while(strs[i + 1][j] && strs[i][j] && strs[i][j] == strs[i + 1][j] && j < len)
        {
            j++;
            
        }
        len = j;
        i++;
    }
    char *str = malloc(j + 1);
    if(j == 0)
    {
        str[0] = '\0';
        return str;
    }
    else 
    {
        while(k < j)
        {
            str[k] = strs[i][k];
            k++;
        }
    
    str[k] = '\0'; 
    return str;
    }
}