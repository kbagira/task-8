#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin>>n;
    double arr[n]; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    double max=abs(arr[0]);  
    for(int i=0; i<n; i++) {
        if (abs(arr[i])>max){ 
            max=abs(arr[i]); 
        }
    }

    cout<<fixed<<setprecision(2)<<max;

    return 0;
}
