#include <algorithm>
#include <functional>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>

#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n, b, h, w, price, tempT, tempN, max;

    scanf("%d", &n);
    w = n;
    while(n--){
        max = 0;
        scanf("%d",&h);
        while(h--){
            scanf("%d", &b);
            max = (max < b)? b:max;
        }
        printf("Case %d: %d\n",w-n, max);
    }

}