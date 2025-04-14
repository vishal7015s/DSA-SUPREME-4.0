#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int i = 1; i <= n; ++i) {
        // Print left stars
        for(int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // Print spaces
        for(int j = 1; j <= 2 * (n - i); ++j) {
            std::cout << " ";
        }
        // Print right stars
        for(int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    // Lower half of the pattern
    for(int i = 1; i <= n; ++i) {
        // Print left stars
        for(int j = 1; j <= n - i + 1; ++j) {
            std::cout << "*";
        }
        // Print spaces
        for(int j = 1; j <= 2 * (i - 1); ++j) {
            std::cout << " ";
        }
        // Print right stars
        for(int j = 1; j <= n - i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}