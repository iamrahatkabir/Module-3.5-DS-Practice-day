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
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a+n);

    for(int i = 0; i < q; i++)
    {
        int x; 
        cin >> x;
        
        int flag = 0;
        int l = 0;
        int r = n-1;


        while(l <= r)
        {
            int mid = (l+r)/2;

            if(a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if(a[mid] > x)
            {
                r = mid-1;
            }
            else if(a[mid] < x)
            // else
            {
                l = mid+1;
            }
        }

        if(flag == 1)
        {
            cout << "found" << endl;
        }
        else{
            cout << "not found" << endl;
        }

    }

    return 0;
}