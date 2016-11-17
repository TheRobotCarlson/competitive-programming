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
    int n, f, sum, t1,t2,t3;
    scanf("%d",&n);
    while(n--){
        sum = 0;
        scanf("%d",&f);
        while(f--){
            scanf("%d %d %d",&t1,&t2,&t3);
            sum += (t1*t3);
        }
        printf("%d\n",sum);
    }

}