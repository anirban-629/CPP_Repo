#include<iostream>
using namespace std;
int main(){
    int n,arr[n],_count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0)
            _count++;
    }
    cout<<_count;
    return 0;
}
