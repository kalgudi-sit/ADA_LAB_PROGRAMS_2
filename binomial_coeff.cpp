#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n,k;
    cout<<"Enter value of n and k : ";
    cin>>n>>k;
    int nums[n+1][k+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=min(i,k);j++) {
            if(j==0 || i==j) { nums[i][j] = 1; }
            else {
                nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
            }
        }
    }
    cout<<"ANS : "<<nums[n][k];
    return 0;
}