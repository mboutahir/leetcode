int removeElement(int* nums, int numsSize, int val) {
    int i;

    i = 0;
    int j = 0;
    int k = numsSize - 1;
  
    while(i  < numsSize)
    {
         if(nums[i] != val)
        {
            j++;
        }  
        if(nums[i] == val  && k > 0 )
        {
            nums[i] = nums[k];
            k--;
        }
         while(nums[i] == val  && k > 0)
            {
                nums[i] =nums[k];
                k--;
            }
        i++;
    }
    return (j);
    
}