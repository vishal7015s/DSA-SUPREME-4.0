#include <iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  int n;
  cin>>n;

  for(int i=1; i<=n; i++){
    char ch='A';
    for(int j=1; j<=n-i; j++){
      cout<<"  ";
    }
    for(int j=1; j<=i; j++){
      cout<<ch<<" ";
      ch++;
    }
    ch = ch-2;

    while(ch>='A'){
      cout<<ch<<" ";
      ch--;
    }
    cout<<endl;
  }
  return 0;
}