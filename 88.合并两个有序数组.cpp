// 给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
// 请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
// 注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 已知nums1中可用的数共有m个，且数组长度为m+n
        // 所以可以直接在nums1[m]的后面直接替换/加上nums2中的字符
        for(int i = 0;i != n;i++){
            nums1[m+i] = nums2[i];
        }
        
        // 最后进行大小排序
        sort(nums1.begin(),nums1.end());
    }
};