// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     // your code goes here
//     int n;
//     cin >> n;
//     vector<int> s, t, res, rnds;

//     for (int i = 0; i < n; i++)
//     {
//         rnds.push_back(i);
//         int sVal, tVal;
//         cin >> sVal;
//         s.push_back(sVal);
//         cin >> tVal;
//         t.push_back(tVal);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         res.push_back(abs(s[i] - t[i]));
//     }

//     sort(res.begin(), res.end()), reverse(res.begin(), res.end());

//     for (int i = 0; i < rnds.size(); i++)
//     {
//         if (res[0] == res.at(rnds.at(i)))
//         {
//             cout << i + 1 << " " << res[0];
//             break;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	int mx1=0;
	int w=0;
	
	int a=0,b=0;
	while(N--)
	{  int p1,p2;
	   cin>>p1>>p2;
	   a+=p1;
	   b+=p2;
	   mx1=max(mx1,abs(a-b));

	       if(mx1==a-b)
	              w=1;
	       else
	        if(mx1==b-a)
	            w=2;
	       
	   
       
	}

	    cout<< w<< " "<<mx1;
	
}
