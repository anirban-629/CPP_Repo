#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> arr{1,2,32,2,2,3,3,2,2,3,3,2,4,4};
	arr.erase(remove(arr.begin(),arr.end(),2),arr.end());
	for(auto ele:arr)cout<<ele<<" "; 
	return 0;
}