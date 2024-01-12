class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        vector<int> indexes;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                indexes.push_back(++left);
                indexes.push_back(++right);
                return indexes;
            }
            else if(numbers[left]+numbers[right]<target)
                left++;
            else right--;
            
        }
        indexes.push_back(-1);
        indexes.push_back(-1);
        return indexes;        
    }
};