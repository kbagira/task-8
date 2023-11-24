#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n,i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=arr[0];
   
    for(i=0; i<n; i++){
        if(arr[i]<min){
             min=arr[i];
             
        }
    }
    int count=0;
    for(i=0; i<n; i++){
        if(arr[i]!=min){
             count++;
        }
        else{
            break;
        }
    }
    arr[count]=arr[0];
    arr[0]=min;

    for(i=0; i<n; i++){

    cout<<arr[i]<<" ";
    }

    return 0;
}
