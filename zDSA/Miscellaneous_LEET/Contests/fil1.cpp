#include <iostream>
#include <vector>
using namespace std;

int vowelStrings(vector<string>& words, int left, int right) {
        int count{};
        for(int i=left;i<=right;i++){
            if(
                (words[i][0]=='a'||words[i][0]=='A'||
                 words[i][0]=='e'||words[i][0]=='E'||
                 words[i][0]=='i'||words[i][0]=='I'||
                 words[i][0]=='o'||words[i][0]=='O'||
                 words[i][0]=='u'||words[i][0]=='U')
                 &&
                (words[i][words[i].size()-1]=='a'||words[i][words[i].size()-1]=='A'||
                 words[i][words[i].size()-1]=='e'||words[i][words[i].size()-1]=='E'||
                 words[i][words[i].size()-1]=='i'||words[i][words[i].size()-1]=='I'||
                 words[i][words[i].size()-1]=='o'||words[i][words[i].size()-1]=='O'||
                 words[i][words[i].size()-1]=='u'||words[i][words[i].size()-1]=='U')
            ){
                count++;
            }
        }
        return count;
}

int main() {
//    vector<string> arr{"hey","aeo","mu","ooo","artro"};
    vector<string> arr{"are","amy","u"};
    int left = 0, right = 2;
    cout << vowelStrings(arr,left,right);
//    cout<<arr[0][arr[0].size()-1];
    return 0;
}
