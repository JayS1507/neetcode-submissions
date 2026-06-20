class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> frq;

        for(int n : nums){
            frq[n]++;
        }

        vector<pair<int,int>> p;

        for(auto it:frq){
            p.push_back({it.second,it.first});
        }

        sort(p.rbegin(),p.rend());

        vector<int> ans;

        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }

        return ans;
    }
};
