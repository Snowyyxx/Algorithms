#include<iostream>
#include<vector>

void SelectionSort(std::vector<int>&Numbers){
  
    int min_value,min_index,len =Numbers.size();

    for(auto i =0;i<len;i++){
        min_value = Numbers[i];
        min_index = i;
        
        for(auto j =i+1;j<len;j++){
            if(min_value>Numbers[j]){
                min_index =j;
                min_value= Numbers[j];
            }
        }  
        
        std::swap(Numbers[i],Numbers[min_index]);
    }


}


int main(){

    std::vector<int>Numbers = {10,9,8,20,19,1,2};
    SelectionSort(Numbers);

    for(auto i =Numbers.begin();i!=Numbers.end();++i){
        std::cout<<*i<<",";
    }


}