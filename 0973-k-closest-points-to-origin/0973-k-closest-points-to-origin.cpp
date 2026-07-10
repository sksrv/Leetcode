class Solution {
public:
    struct cmp{
        bool operator()(const pair<pair<int,int>,long long> &a, const pair<pair<int,int>,long long> &b)const {
            return a.second < b.second;    //max heap
        }
};

    long long distance(int x, int y) {
        return 1LL * x * x + 1LL * y * y;
}

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<pair<int,int>,long long>, vector<pair<pair<int,int>,long long>> ,cmp> pq; //max heap
        vector<vector<int>> ans;

        for(int i = 0;i<points.size();i++){
            int a = points[i][0];
            int b = points[i][1];
            long long dis = distance(a,b);
            pair<pair<int,int>,long long> p = {{a,b},dis};
            pq.push(p);

            if(pq.size() > k){
                pq.pop();
            }

        }

        
        while(!pq.empty()){
            int a = pq.top().first.first;
            int b = pq.top().first.second;
            ans.push_back({a,b});
            pq.pop();
        }

        return ans;
    }
};