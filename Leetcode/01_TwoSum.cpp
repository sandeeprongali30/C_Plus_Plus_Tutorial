#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (ans.find(complement) != ans.end())
            {
                return {ans[complement], i};
            }

            ans[nums[i]] = i;
        }
        return {};
    }
};

// 1. vector<int> nums (Pass by Value)
// vector<int> twoSum(vector<int> nums, int target)
// A copy of the whole vector nums is created when calling the function.
// That means:
// If nums has n elements, copying takes O(n) time.
// Uses extra memory to hold the copy.
// Any modifications inside the function don’t affect the original vector outside.

// 2. vector<int>& nums (Pass by Reference)
// vector<int> twoSum(vector<int>& nums, int target)
// The function gets a reference (alias) to the original vector, no copy is made.
// Much faster and memory-efficient, especially when nums has up to 10^4 elements (as in the problem).
// Any modifications inside the function would affect the caller’s vector (but in our Two Sum we don’t modify it).

// 3. const vector<int>& nums (The Safest Choice)
// vector<int> twoSum(const vector<int>& nums, int target)
// This also avoids a copy (like reference).
// But adds a const guarantee: the function cannot modify the vector.
// Perfect for read-only use cases (like Two Sum).

// Summary:
// vector<int> nums → makes a copy (slow, extra memory).
// vector<int>& nums → passes reference (fast, no copy).
// const vector<int>& nums → best for read-only, avoids copy and prevents accidental modification.