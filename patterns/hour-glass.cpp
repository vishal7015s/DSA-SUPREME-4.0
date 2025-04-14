#include <iostream>
using namespace std;

int main() {
//   cout << "Hello world!" << endl;
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=i-1; j++){
      cout<<"  ";
    }
    for(int j=1; j<=2*(n-i)+2; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<"  ";
    }
    for(int j=1; j<=2*i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}