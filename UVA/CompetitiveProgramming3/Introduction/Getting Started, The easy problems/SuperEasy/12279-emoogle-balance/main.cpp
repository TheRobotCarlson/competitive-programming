#include <algorithm>
#include <functional>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstdio>
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

    int n, rt, t, tally=0;
    
    while(scanf("%d",&n),n){
        tally++;
        rt=0;
        while(n--){
            scanf("%d",&t);
            if(t==0){
                rt--;
            }else{
                rt++;
            }
        }
        printf("Case %d: %d\n",tally,rt);
    }

return 0;
}
