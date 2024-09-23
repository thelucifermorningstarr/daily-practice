#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSteps(int n, long prefix, long nextPrefix){
        int steps=0;

        while(prefix<=n){
            steps+=min((long)n+1, nextPrefix)-prefix;
            prefix*=10;
            nextPrefix*=10;
        }

        return steps;
    }
    int findKthNumber(int n, int k) {
        int curr=1;

        k--;

        while(k>0){
            int steps=countSteps(n, curr, curr+1);

            if(steps<=k){
                curr+=1;
                k-=steps;
            }
            else{
                curr*=10;
                k-=1;
            }
        }
    return curr;
    }  
};