// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
// 你可以按任意顺序返回答案。

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 从数组的第i位与第i+1位开始遍历相加
        for(int i = 0;i < nums.size();i++){
            for(int j = i+1;j < nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};