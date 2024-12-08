char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    int i = 1;
    char *s = "Fizz";
    char *str = "Buzz";
    char *strr = "FizzBuzz";
    int j = 0;
    int k = 0;
    int x = 0;
    int total = 0;
    int  y = 0;
    char **arr = malloc(*returnSize * sizeof(char *));
    while(x < n)
    {
        if(i % 3 != 0 && i % 5 != 0)
        {
            if(i>10)
            {
                 j = i;
                 total = i;
                while(j > 0)
                {
                    j = j/10;
                    y++;
                }
                arr[x] = malloc(y + 1);
                arr[x][y] = '\0';
                while(y > 0)
                {
                    arr[x][y - 1] =  ((total%10) + '0');
                    total = total/10;
                    y--;
                }
            
            }
            else{
            arr[x] = malloc(2);
            arr[x][0] = (i + '0');
            arr[x][1] = '\0';
            }
        }
        else if(i % 3 == 0 && i % 5 == 0)
        {
            j= 0;
            k = 0;
            arr[x] = malloc(8 + 1);
            while(strr[j])
            {
                arr[x][k++] = strr[j++];
            }
            arr[x][k] = '\0';
        }
        else if(i % 3 == 0 && i % 5 != 0)
        {
            j = 0;
            k = 0;
            arr[x] = malloc(4 + 1);
            while(s[j])
            {
                arr[x][k++] = s[j++];
            }
            arr[x][k] = '\0';
      
        }
         
        else if(i % 3 != 0 && i % 5 == 0)
        {
            j = 0;
            k = 0;
            arr[x] = malloc(4 + 1);
            while(str[j])
            {
                arr[x][k++] = str[j++];
            }
            arr[x][k] = '\0';
        }
        i++;
        x++;
    }
    return arr;
}