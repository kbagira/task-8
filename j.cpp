#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n,i,k;
    cin>>n>>k;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]+arr[j])% k==0){
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}