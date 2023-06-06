class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       map<int,int>map;
    vector<int>ans;
for(auto x:arr1)
map[x]++;
for(auto temp:arr2){
    if(map.find(temp) != map.end()){
        // cout<<temp<<" ";
     while(map[temp]--) {
     ans.push_back(temp);
     }
     map.erase(temp);
    }
}
for(auto x:map){
    int count=x.second;
    int ele=x.first;
    while(count--){
        ans.push_back(ele);
    }
    map.erase(ele);
}
    return ans;
        
    }
};