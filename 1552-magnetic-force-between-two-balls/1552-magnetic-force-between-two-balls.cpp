class Solution {
public:
    bool possible(vector<int>& position, int m, int guess){       
                
        int a = position[0];
        int i = 1;
        
        while(m && (i<position.size())){
            int b = position[i];
            int d = abs(b-a);
            if(d >= guess){
                m--;
                a=b;
            }
            i++;
        }
        return m==0;
    }
    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(),position.end());
        
        int n = position.size();
        int low = 1;
        int high = position[n-1];
        int res = 0;
        
        while(low <= high){
            int mid = low + (high-low)/2;

            if(possible(position,m-1,mid)){
                res = mid;
                low = mid+1;
            }
            else{
                 high = mid - 1;
            }
            
        }
        return res;
    }
};