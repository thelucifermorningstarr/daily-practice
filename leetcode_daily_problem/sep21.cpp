#include <bits/stdc++.h>
using namespace std;

// First intiuation approach .....

class solution2
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<string> ans;

        for (int i = 1; i <= n; i++)
        {
            ans.push_back(to_string(i));
        }

        sort(ans.begin(), ans.end());

        vector<int> res;

        for (auto &i : ans)
        {
            res.push_back(stoi(i));
        }

        return res;
    }
};





// better solution by Himanshu  



class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {

        // arr[13]={1,2,3,4,5,6,7,8,9,10,11,12,13}
        vector<int> res(n);

        int x = 1;

        for (int i = 0; i < n; i++)
        {
            res[i] = x;
            if (x * 10 > n)
            {

                if (x == n)
                {
                    x /= 10;
                }
                x++;

                while (x % 10 == 0)
                {
                    x /= 10;
                }
            }
            else
            {
                x *= 10;
            }
        }
        return res;
    }
};
