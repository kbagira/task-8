#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<max-min;

    return 0;
}
