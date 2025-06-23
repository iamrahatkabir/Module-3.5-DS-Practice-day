#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> prefix(n+1);

    prefix[1] = v[1];
    for(int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i-1] + v[i];
    }



    while(q--)
    {

        int l, r;
        cin >> l >> r;

        long long int sum = 0;

        if(l == 1)
        {
            sum = prefix[r];
        }
        else{
            sum = prefix[r] - prefix[l-1];
        }


        cout << sum << endl;
    }

    return 0;
}