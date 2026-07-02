class Solution {
public:
    struct cmp {
        bool operator()(const pair<int, char>& a,
                        const pair<int, char>& b) const {
            return a.first < b.first;
        }
    };

    string reorganizeString(string s) {
        priority_queue<pair<int, char>, vector<pair<int, char>>, cmp> pq;
        unordered_map<char, int> mp;

        for (char ch : s)
            mp[ch]++;

        for (auto it : mp)
            pq.push({it.second, it.first});

        string res = "";
        int seat = 0;

        while (!pq.empty()) {

            if (seat == 0 || res[seat - 1] != pq.top().second) {

                auto temp = pq.top();
                pq.pop();

                res.push_back(temp.second);
                seat++;

                temp.first--;

                if (temp.first > 0)
                    pq.push(temp);
            }
            else {

                pair<int, char> high = pq.top();
                pq.pop();

                if (pq.empty())
                    return "";

                auto temp = pq.top();
                pq.pop();

                res.push_back(temp.second);
                seat++;

                temp.first--;

                if (temp.first > 0)
                    pq.push(temp);

                pq.push(high);
            }
        }

        return res;
    }
};