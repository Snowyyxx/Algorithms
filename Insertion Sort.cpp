#include<iostream>
#include<vector>


void InsertionSort(std::vector<int>&Numbers){

    int len = Numbers.size();

    for(int i=0;i<len;i++){
        int key = Numbers[i];
        int j = i-1;

        while(j>=0 && Numbers[j]>key){
            std::swap(Numbers[j],Numbers[j+1]);
            j =j-1;
        }
// I am swwapping the numbers, I am not deleting the number at Numbers[j+1]!        

    }

}

int main(){
    std::vector<int>Numbers = {10,9,8,2,11,20,1};
    InsertionSort(Numbers);

    for(auto i = Numbers.begin();i!=Numbers.end();++i){
        std::cout<<*i<<",";
    }

}

