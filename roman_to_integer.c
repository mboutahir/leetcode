int romanToInt(char* s) {
    int i;
    int j;
    i = 0;
    j = 0;
    int count;

    while(s[i])
    {
        count = 0;
        if(s[i] == 'I')
        {
            if(s[i + 1] == 'V')
            {
                count = 4;
                j += count;
                i++; 
            }
            else if(s[i + 1] == 'X')
            {
                count = 9;
                j += count;
                i++; 
            }
            else
            {
            char c = '1';
            count = c - 48;
             j += count;
            } 

        }
        else if(s[i] == 'V')
        {
            char c = '1';
            count = c - 48;
            count += 4;
             j += count; 
        }
        else if(s[i] == 'X')
        {
            if(s[i + 1] == 'C')
            {
                count = 90;
                j += count;
                i++;
                
            }
            else if(s[i + 1] == 'L')
            {
                count = 40;
                j += count;
                i++; 
            }
            else
            {
           char c = '1';
            count = c - 48;
            count += 9;
             j += count;
            } 
        }
        else if(s[i] == 'L')
        {
            char c = '1';
            count = c - 48;
            count += 49;
             j += count; 
        }
        else if(s[i] == 'C')
        {
            if(s[i + 1] == 'M')
            {
                count = 900;
                j += count;
                i++;
                
            }
            else if(s[i + 1] == 'D')
            {
                count = 400;
                j += count;
                i++; 
            }
            else
            {
            char c = '1';
            count = c - 48;
            count += 99;
             j += count;
            } 
        }
        else if(s[i] == 'D')
        {
            char c = '1';
            count = c - 48;
            count += 499;
             j += count; 
        }
        else if(s[i] == 'M')
        {
            char c = '1';
            count = c - 48;
            count += 999;
             j += count; 
        }
        i++;
       
    }
     return j;
}
