#include<iostream>
using namespace std;
#include<vector>

int main() {

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int count = n*n;
        
        int fr = 0;
        int lc = n-1;
        int lr = n-1;
        int fc = 0;

        int x = 1;
        vector<vector<int>  > ans(n, vector<int> (n, 0));

        while(count >
        + 0){
            
            for(int i=fr ;i<=lc && count > 0; i++){
                ans[fr][i] = x;
                x++;
                count--;
            }
            fr++;

            
            for(int i=fr ;i<=lr && count > 0; i++){
                ans[i][lc] = x;
                x++;
                count--;
            }
            lc--;
            
            for(int i=lc ;i>=fc  && count > 0; i--){
                ans[lr][i] = x;
                x++;
                count--;
            }
            lr--;

            for(int i=lr ;i>=fr  && count > 0; i--){
                ans[i][fc] = x;
                x++;
                count--;
            }
            fc++;
            
        }

        for(auto i: ans){
            for(auto j: i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    return 0;
}