void sort(int* array, int len){
    int tmp;
    
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j < len; j++){
            if(array[i] < array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int thirdMax(int* nums, int numsSize){
    sort(nums, numsSize);
    
    int result[numsSize], count = 1;
    result[0] = nums[0];
    
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != nums[i-1]){
            result[count] = nums[i];
            count ++;
        }
    }
    
    if(count < 3) return result[0];
    
    return result[2];

}
