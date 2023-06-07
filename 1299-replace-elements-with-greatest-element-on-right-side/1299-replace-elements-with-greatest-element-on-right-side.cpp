class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=arr.size();
        vector<int>ans(n);
        int max=arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(max < arr[i+1])
                max=arr[i+1];
            ans[i]=max;
        }
        ans[n-1]=-1;
        return ans;  
    }
};