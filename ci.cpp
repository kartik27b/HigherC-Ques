#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
using namespace std;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vb vector<bool>
#define vs vector<string>
#define px(x) cout << x << endl
#define pfi(x) printf("%d\n", x)
#define pfs(x) printf("%s\n", x)
#define sfi(x) scanf("%d", &x)
#define sfs(x) scanf("%s", x)
#define f first
#define sec second

int main() {
    int a,b,k;
    cin >> a >> b >> k;
    while(k--){
        if(a > 0){
            a;
        }else{
            b--;
        }
    }
    cout << a << " " << b;

	return 0;
}