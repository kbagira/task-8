#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n,i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=1; i<n; i=i+2){
        swap(arr[i], arr[i-1]);
    }
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
      return 0;
}
