#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n,i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=0;
    for(i=0; i<n; i++){
        if(arr[i]>=arr[max]){
             max=i;
        }
    }
    int count=arr[max];
    arr[max]=arr[n-1];
    arr[n-1]=count;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
