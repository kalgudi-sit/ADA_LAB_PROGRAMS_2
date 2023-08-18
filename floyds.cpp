#include<iostream>
using namespace std;

int main() {
    int n,num;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    cout<<"Enter the Adjacency matrix : \n";
    int arr[n][n],res[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>num;
            arr[i][j] = res[i][j] = num;
        }
    }
    for(int k=0;k<n;k++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                res[i][j] = min(res[i][j],(res[i][k] + res[k][j]));
            }
        }
    }
    cout<<"FLOYD'S RESULTANT MATRIX : \n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}