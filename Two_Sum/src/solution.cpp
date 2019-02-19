#include "../include/solution.h"

Solution::Solution()
{

}



int Solution::binSearch(const std::vector<int> &vec, const int &des, int &des_ID)//输入数组必须为升序
{
    int min_ID = 0;
    int max_ID = vec.size() - 1;
    int mid_ID = 0;
    int mid = 0;

    while(min_ID<=max_ID)
    {
        mid_ID = int((min_ID + max_ID)/2.0);
        mid = vec[mid_ID];
        if(des==mid)
        {
            des_ID = mid_ID;
            return 1;
        }
        else if(des<mid)
        {
            max_ID = mid_ID-1;

        }
        else
        {
            min_ID = mid_ID+1;
        }

    }
    return 0;
}

/*
std::vector<int> Solution::twoSum(std::vector<int> &nums, int target)
{
    std::vector<int> result;
    int temp, des, des_ID = 0;
    while(nums.size()>1)
    {
        temp = nums[nums.size()-1];
        nums.pop_back();
        des = target - temp;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]==des)
            {
                des_ID = i;
                result.push_back(des_ID);
                result.push_back(nums.size());
            }

        }

    }
    return result;
}
*/

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target){
    std::unordered_map<int,int> hash;

    for (int i = 0; i < nums.size(); i++) {
        auto iter = hash.find(target - nums[i]);

        if (iter != hash.end()) {
            return vector<int> {iter->second, i};
        }
        hash[nums[i]] = i;
    }
    return vector<int>();
}

