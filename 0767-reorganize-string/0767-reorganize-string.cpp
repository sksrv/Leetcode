class Solution {
public:
    struct cmp {
        bool operator()(const pair<int, char>& a,  
                        const pair<int, char>& b) const {
            return a.first < b.first;        //max heap
        }
    };

    string reorganizeString(string s) {
        priority_queue<pair<int, char>, vector<pair<int, char>>, cmp> pq;   //max heap
        unordered_map<char, int> mp;

        for (char ch : s)
            mp[ch]++;                 //store freq

        for (auto it : mp)
            pq.push({it.second, it.first});         //store all pair in heap

        string res = "";
        int seat = 0;                      //index

        while (!pq.empty()) {

            if (seat == 0 || res[seat - 1] != pq.top().second) {

                auto temp = pq.top();
                pq.pop();

                res.push_back(temp.second);
                seat++;

                temp.first--;          //reduce freq by 1

                if (temp.first > 0)
                    pq.push(temp);
            }
            else {

                pair<int, char> high = pq.top();         //if prev element is same
                pq.pop();                                 

                if (pq.empty())
                    return "";                             //if heap is empty

                auto temp = pq.top();                      //next highest element
                pq.pop();

                res.push_back(temp.second); 
                seat++;

                temp.first--;                            //reduce freq by 1

                if (temp.first > 0)
                    pq.push(temp);                    

                pq.push(high);                            // push highest freq element
            }
        }

        return res;
    }
};