bool checkIfExist(int* arr, int arrSize) {
    int i = 0;
    int j = 0;
    while(i < arrSize)
    {
        j = 0;
        while(j < arrSize)
        {
            if(i != j)
            {
                if((arr[i] * 2) == arr[j])
                {
                    return true;
                }
            }
            j++;
        }
        i++;
    }
    return false;
}