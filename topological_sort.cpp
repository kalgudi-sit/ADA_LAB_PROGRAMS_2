#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int allzero(vector<vector<int>>& nums) {
    for(int i=0;i<nums.size();i++) {
        for(int j=0;j<nums.size();j++) {
            if(nums[i][j]==1){ return 0; }
        }
    }
    return 1;
}

int main() {
    int n,num;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    vector<vector<int>> nums;
    cout<<"Enter the adjacency matrix : \n";
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
    while(!allzero(nums)){
        for(int i=0;i<nums.size();i++) {
            if(find(res.begin(),res.end(),i)!=res.end()) { continue; }
            int flag = 0;
            for(int j=0;j<nums.size();j++) {
                if(nums[j][i]==1) { flag = 1; break; }
            }
            if(flag==0) {
                res.push_back(i);
                for(int j=0;j<nums.size();j++) {
                    nums[i][j] = 0;
                }
            }
        }
    }
    for(int i=0;i<n;i++) {
        if(find(res.begin(),res.end(),i)==res.end()) { res.push_back(i); }
    }
    cout<<"TOPOLOGICAL SORT ORDER : \n";
    for(int i=0;i<res.size();i++) {
        cout<<res[i]<<" ";
    }
    return 0;
}