class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        unordered_map <int, int> naufil;
        for(int i=0;i<nums.size();i++)
        {
            naufil[nums[i]]++;
}
        int a=nums.size();
        for(auto x : naufil)
        {
            if(x.second > a/2)
           ans = x.first;
        }
         return ans;
    }
    
   
};
