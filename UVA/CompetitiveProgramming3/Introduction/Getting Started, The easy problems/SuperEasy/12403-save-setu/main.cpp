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
    int total=0,t,n;

    char temp[7];

    scanf("%d",&n);
    while(n--){
        scanf("%s",temp);
        if(temp[0]=='d'){
            scanf("%d",&t);
            total+=t;
        }else{
            printf("%d\n",total);
        }
    }

return 0;
}
