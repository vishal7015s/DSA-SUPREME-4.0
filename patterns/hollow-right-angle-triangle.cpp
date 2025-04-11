#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            if(col==1 || col==row || row==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}