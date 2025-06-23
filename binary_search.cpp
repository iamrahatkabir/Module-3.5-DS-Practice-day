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
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int q;
    cin >> q;

    for (int j = 0; j < q; j++)
    {
        int value;
        cin >> value;

        int l = 0;
        int r = n - 1;
        int flag = 0;

        
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(a[mid] == value)
            {
                flag = 1;
                break;
            }
            else if(a[mid] > value)
            {
                r = mid-1;
            }
            else{
                l = mid + 1;
            }

        }

        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}