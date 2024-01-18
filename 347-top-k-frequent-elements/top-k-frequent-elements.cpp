class Solution {
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto x : nums) {
            mp[x]++;
        }

        vector<pair<int, int>> v;
        for (auto x : mp) {
            v.push_back(pair{x.first, x.second});
        }

        sort(v.begin(), v.end(), cmp);

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            auto it = v.begin() + i;
            ans.push_back(it->first);
        }
        return ans;
    }
};
        