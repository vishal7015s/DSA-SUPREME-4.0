#include<iostream>
using namespace std;

int main() {

    int n,m;
    cout<<"Enter the value of n or m : "<<endl;
    cin>>n>>m;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=m; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}