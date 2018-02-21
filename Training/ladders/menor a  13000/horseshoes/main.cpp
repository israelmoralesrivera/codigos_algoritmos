#include <bits/stdc++.h>

using namespace std;

#define FOR(i,e,l) for(int i=e;i<l;i++)
#define FORE(i,e,l) for(int i=e;i<=l;i++)
#define FORD(i,e,l) for(int i=l;i>=e;i--)

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int nums[4];
    FOR(i,0,4){
        cin >> nums[i];
    }
    sort(nums, nums+4);
    int res=0;
    FOR(i,1,4){
        if(nums[i] == nums[i-1]){
            res++;
        }
    }

    cout <<res<<endl;

    return 0;
}
