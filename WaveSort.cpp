#include<iostream>

int wave_sort(int num[], int length){
    for(int i =0;i<length;i++){
        if(num[i]<num[i+1]||num[i+2]<num[i+1]){
            if(num[i]>num[i+2]){
                int temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
            else if( num[i]<num[i+2]){
                int temp = num[i+2];
                num[i+2] = num[i+1];
                num[i+2] = temp;   
            }
        }
    }
}

void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        std::cout<<array[i]<<", ";
    }
}

int main()
{
    
    int nums[] = {2,7,9,11,3,20,10,13,100};
    int length = sizeof(nums)/sizeof(nums[0]);
    wave_sort(nums,length);
    print_array(nums,length);
}

