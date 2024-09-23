#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res(n);

        int x=1;

        for(int i=0; i<n; i++){
            res[i]=x;
            if(x*10>n){
                if(x==n){
                    x/=10;
                }
                x++;
                while(x%10==0){
                    x/=10;
                }
            }
            else{
                x*=10;
            }
        }
    return res;
    }
};


// dekhna mera type kiya hua dikh rha h kya ??
//hi chetan

// hlo bro ....hlo hlo