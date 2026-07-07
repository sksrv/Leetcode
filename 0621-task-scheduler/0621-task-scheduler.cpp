class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> freq;
        unordered_map<char,int> free;
        int seat = 1;

        for(char i: tasks){
            freq[i]++;
            free[i] = 1;
        }
        
        priority_queue<pair<int,char>> pq;        //max heap

        for(auto i : freq){
            pq.push({i.second,i.first});          //storing in heap
        }


        while(!pq.empty()){
            vector<pair<int,char>> pulled;         //vector that stores failed task

            while(!pq.empty()){
                pair<int,char> p = pq.top();        //top element of heap
                pq.pop();

                if(free[p.second] <= seat){           //check it is possible to seat or not
                    if(p.first > 1){                  
                        pq.push({p.first-1,p.second});
                        free[p.second] = seat+n+1;
                    }
                    break;          //allot 1 seat at 1 time 
                }
                else{
                    pulled.push_back(p);
                }
            }
            for(int i = 0;i < pulled.size();i++){
                pq.push(pulled[i]);                   //restore all element in heap
            }   
            seat++;
        }

        return seat-1;

    }
};