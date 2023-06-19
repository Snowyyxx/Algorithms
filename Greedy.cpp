#include<iostream>
#include<vector>
#include <algorithm>

/*
Assume we have coins of values 1, 5, 10,
 and 25 (cents), and we want to provide 
 change for an amount using the fewest number of coins.
*/


void coinChange(std::vector<int>&coins,int change){
    
    std::sort(coins.begin(),coins.end()); // ascending order!

    for(auto i =coins.size()-1;i>=0;i--){
        while(coins[i]<=change){
            change = change-coins[i];
            std::cout<<coins[i]<<",";
        }
        if(change==0){
                return;
        }
    }

}

int main()

{
    
    std::vector<int>coins={1,5,10,25};
    int change = 36;

    std::cout<<"total change to be given:"<<change<<std::endl;
    coinChange(coins,change);


}