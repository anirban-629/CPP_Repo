#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
        string ans="",s,t;
	    cin>>s>>t;
	    for (int i = 0; i < s.length(); i++) {
	        if(s.at(i)==t.at(i)){
	            ans+='G';
	        }else{
	            ans+='B';
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
