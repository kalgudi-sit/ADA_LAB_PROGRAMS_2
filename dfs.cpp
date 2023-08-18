#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dfs_traverse(int index,vector<vector<int>>& nums,vector<int>& res) {
    if(find(res.begin(),res.end(),index)==res.end()) {
        res.push_back(index);
    }
    
    for(int i=index;i<nums.size();i++) {
        for(int j=0;j<nums[0].size();j++) {
            if(nums[i][j]==1){
                nums[i][j] = nums[j][i] = 0;
                dfs_traverse(j,nums,res);
            }
        }
    }
    
    return;
}

int main() {
    int n,num;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    vector<vector<int>> nums;
    for(int i=0;i<n;i++) {
        vector<int> temp;
        for(int j=0;j<n;j++) {
            cin>>num;
            temp.push_back(num);
        }
        nums.push_back(temp);
        temp.clear();
    }
    vector<int> res;
    dfs_traverse(0,nums,res);
    cout<<"DFS TRAVERSAL : "<<"\n";
    for(int i=0;i<res.size();i++) {
        cout<<res[i]<<" ";
    }
    return 0;
}