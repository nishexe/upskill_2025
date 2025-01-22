#include<iostream>
#include<vector>
#include<map>

using namespace std;
bool containsDuplicate(vector<int> &nums){
    map<int,int> freq_map;
    for(int num : nums){
        freq_map[num]++;
    }
    for(const auto &pair : freq_map){
        if(pair.second > 1){
            return true;
        }
    }return false;
}

int main(){
    vector<int> nums{1,2,2,3,4,5};
    std::cout<<containsDuplicate(nums);
    return 0;
}