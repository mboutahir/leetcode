int lengthOfLastWord(char* s) {
    int i = 0;
    int j = 0;
    while(s[i])
    {
        i++;
    }
    i--;
    while(i >= 0 && s[i] == ' ')
    {
        i--;
    }
    while(i >= 0 && s[i] != ' ')
    {
        j++;
        i--;
    }
return (j);
}