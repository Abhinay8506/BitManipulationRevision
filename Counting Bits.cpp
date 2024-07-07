class Solution {
public:
    int countset(int i){
        int count=0;
        while(i!=0){
            if(i&1){
               count++;
            }
            i=i>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        for(int i=0;i<n+1;i++){
            v[i]=countset(i);
        }
        return v;
    }
};
