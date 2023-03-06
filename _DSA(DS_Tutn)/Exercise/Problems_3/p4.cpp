#include<iostream>
#include<string.h>
using namespace std;

void p1();
void p2();
void p3();
void p4();
void p5();

int main(){
    p5();
    return 0;
}

void p1(){
    int t,n,result[t]{},i=0;
    cin>>t>>n;
    while(i<t){
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]>result[i])
                result[i]=arr[j];
        }
        i++;
    }
    for(int i=0;i<t;i++)
        cout<<result[i]<<" ";
}
void p2(){
    string s;
    getline(cin,s);
    int _count=0;
    for(int i=0;i<s.length();i++){
        if(
           (int(s[i])==32)||
           (int(s[i])>=65&&int(s[i])<=90) ||
           (int(s[i])>=97&&int(s[i])<=122)
           ){}
        else
            _count++;
    }
    cout<<endl<<_count;
}
void p3(){
    int n,result;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        result+=temp;
    }
    cout<<endl<<result;
}
void p4(){
    int n,rev=0,rem;
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<rev;
}
void p5(){
    int bill,sum=0;
    cin>>bill;
    while(bill!=0){
        if((bill%10)%2!=0){
            sum+=bill%10;
        }
        bill/=10;
    }
    cout<<sum;
}
