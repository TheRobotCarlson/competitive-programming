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
    int t, n, temp, max = 0,min=10000;

    scanf("%d",&t);

    for(int i = 0; i< t;i++){
        scanf("%d",&n);
        scanf("%d",&temp);
        min = temp;
        max = temp;
        for(int j = 0; j<n-1;j++){
            scanf("%d",&temp);
            if(temp>max){
                max=temp;
            }else if(temp<min){
                min=temp;
            }
        }
        printf("%d\n",2*(max-min));
        max = 0; min=10000;
    }

    return 0;
}