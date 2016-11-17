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
int n,i=0,t,c;
bool test=false;

scanf("%d",&n);
while(n--){
    c=3; i++; test=false;
    while(c--){
        scanf("%d",&t);
        if(t>20){
            test = true;
        }
    }

    if(test){
        printf("Case %d: bad\n",i);
    }else{
        printf("Case %d: good\n",i);
    }
}



return 0;
}
