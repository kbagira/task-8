#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n,i;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    int s=0;
    int count=0;
    double aw=double(sum)/n;
    for(int i=0; i<n; i++){
        if(arr[i]>aw){
            s=s+arr[i];
            count++;
        }
    }
    cout<<s<<" "<<count;
    

    return 0;
}
