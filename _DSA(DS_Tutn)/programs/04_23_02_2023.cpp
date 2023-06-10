#include<iostream>
#include<stdio.h>
using namespace std;

void checkPrime();
int getNumber();

int main(){
    int n=getNumber(),flag=0;
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
//    checkPrime();
    return 0;
}

void checkPrime(){
    int n,flag=0;
    cout<<"Enter a Positive Integer - ";
    cin>>n;
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
}

int getNumber(){
    int n;
    cout<<"Enter a Positive Integer - ";
    cin>>n;
    return n;
}

int getNumber();
