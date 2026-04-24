#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // check if complement exists
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {}; // if no solution
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}