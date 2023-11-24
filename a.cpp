#include <iostream>
using namespace std;
int main() {
    int array[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
   for(int i=1; i<n; i++){
       if(array[i]>array[i-1]){
           cout<<array[i]<<" ";
       }
   }
    
    

    return 0;
}
