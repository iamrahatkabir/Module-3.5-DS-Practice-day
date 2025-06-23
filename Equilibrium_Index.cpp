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
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int>equ(n);
    equ[0] = v[0];

    for(int i = 1; i < n; i++)
    {
        equ[i] = equ[i-1]+v[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(i == 0 || i == n-1)
        {

        }
        else if(equ[i-1] == equ[n-1]-equ[i])
        {
            cout << i << endl;
        }
    }
    

    return 0;
}