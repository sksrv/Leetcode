class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;     //max heap

        if(a > 0) pq.push({a,'a'});
        if(b > 0) pq.push({b,'b'});
        if(c > 0) pq.push({c,'c'});
        
        string res = "";

        while(!pq.empty()){
            pair<int,char> p = pq.top();
            pq.pop();
            
            if(res.size() > 1){
                if((res[res.size()-1] != p.second)){   //if last element is not same then push
                    res += p.second;               
                    p.first--;
                    if(p.first > 0){
                        pq.push(p);
                    }
                }
                else if((res[res.size()-1] == p.second) && (res[res.size()-2] != p.second)){
                    res += p.second; //if last ele is same and 2nd last is not same then also push
                    p.first--;
                    if(p.first > 0){
                        pq.push(p);
                    }
                }
                else{    //if last 2 element is same 
                    if(pq.empty()) break;   
                    
                    pair<int,char> q = pq.top();   //get next max element
                    pq.pop();
                    res += q.second;
                    q.first--;
                    if(q.first > 0){
                        pq.push(q);
                    }
                    pq.push(p);
                }
            }
            else{   //if string size is less than 1 
                res += p.second;               
                p.first--;
                if(p.first > 0){
                    pq.push(p);
                }
            }    
        }

        return res;
    }
};