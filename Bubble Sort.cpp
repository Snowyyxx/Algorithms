#include<iostream>
#include<vector>


void BubbleSort(std::vector<int>&Numbers){
    int len = Numbers.size();

    for(auto i =0;i<len;i++){
        for(auto j =0; j<len-i-1;j++){
            if(Numbers[j]>Numbers[j+1]){
                std::swap(Numbers[j],Numbers[j+1]);
            }
        }
    }

}


int main() {

    std::vector<int>Numbers ={10,9,8,11,3,4,2,1};
    BubbleSort(Numbers);

    for(auto i = Numbers.begin();i!=Numbers.end();++i){
        std::cout<<*i<<",";
    }

}