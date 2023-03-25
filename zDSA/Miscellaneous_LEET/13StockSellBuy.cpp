#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
/*
Input: prices = [7,1,5,3,6,4]
Output: 5
*/
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        vector<int> prices1=prices;
        reverse(prices1.begin(),prices1.end());
        int maxProfitDay=0;
        vector<int> profit;
        int k=0;
        for(int i=0; i<prices1.size(); i++)
        {
            for(int j=i+1; j<prices1.size(); j++)
            {
                if(prices1[i]-prices1[j]>0&&prices1[i]-prices1[j]>maxProfitDay)
                {
                    cout<<prices1[i]<<" "<<prices1[j]<<endl;
                    maxProfitDay=i;
                }
            }
        }
        cout<<endl<<maxProfitDay<<endl;
        return 1;
    }
};
int main()
{
    Solution s;
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);
    cout<<s.maxProfit(prices);
    return 0;
}
