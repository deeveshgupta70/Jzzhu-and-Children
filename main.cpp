#include<bits/stdc++.h>

using namespace std;

#define Fast1 ios_base::sync_with_stdio(0)
#define Fast2 cin.tie(0)
#define Fast3 cout.tie(0)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef short int SI;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair


void getLastIndex(vector<pair<int,int> > &res,int t){

    int len = res.size();
    while( len > 1){
        if(res[0].S <= t){
            res.erase(res.begin());
            len -= 1;
        } 
        else {

            int temp = res[0].S - t;
            int i = res[0].F;
            res.PB(MP(i,temp));
            res.erase(res.begin());
        }
    }

    cout<<res[0].F;
}

int main()
{
    Fast1;
    Fast2;
    Fast3;
        int N,t;
        cin >> N>>t;
        vector<pair<int,int> > res;

        FOR(i,N){
            int x;
            cin>>x;
            res.PB(MP(i+1,x));
        }

        getLastIndex(res,t);

    return 0;
}

