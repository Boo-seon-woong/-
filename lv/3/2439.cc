#include <iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=n-i-1){
                cout << "*";
            } else {cout << " ";}
        }
        cout<<"\n";
    }
    return 0;
}