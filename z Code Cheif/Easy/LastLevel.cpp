#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x%3==0){cout<<x*y+(x/3-1)*z;}
	    else if(x%3==1){cout<<x*y+(x-1)/3*z;}
	    else if(x%3==2){cout<<x*y+(x-2)/3*z;}
	    cout<<endl;
	}
	return 0;
}
