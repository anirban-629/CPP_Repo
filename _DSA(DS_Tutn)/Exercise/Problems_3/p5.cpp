#include<iostream>
using namespace std;
void p1();
void p2();
void p3();
void p4();
void p5();
int main(){
    p2();
    return 0;
}
void p1(){
    int b1,h1,b2,h2;
    cin>>b1>>h1;
    cin>>b2>>h2;
    (((b1*h1)/2)>((b2*h2)/2))?cout<<((b1*h1)/2):cout<<((b2*h2)/2);
}
void p2(){
    int n,k,_count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=k){
            for(int j=0;j<n;j++){
                if(arr[i]-arr[j]==k){
                    _count++;
                }
            }
        }
    }
    cout<<_count;
}
void p3(){
//    int n,discount,activeProduct=0,eligble=0;
//    cin>>n>>discount;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        int temp;
//        cin>>temp;
//        if(temp>0){
//            arr[i]=temp;
//            activeProduct++;
//            cout<<"TRIGGEREeRD - "<<activeProduct<<endl;
//        }
//    }
////    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
////        if(arr[i]%activeProduct==0){
////            eligble+=(arr[i]/activeProduct);
////        }
////    }
    cout<<activeProduct;
}













