#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums;
    int n,num;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter array elements : \n";
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    cout<<"UNSORTED ARRAY : \n";
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    for(int i=1;i<nums.size();i++) {
        int temp = nums[i];
        int j = i-1;
        while(j>=0 && nums[j]>temp) {
            nums[j+1] = nums[j];
            j -= 1;
        }
        nums[++j] = temp;
    }
    cout<<"\nSORTED ARRAY : \n";
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}