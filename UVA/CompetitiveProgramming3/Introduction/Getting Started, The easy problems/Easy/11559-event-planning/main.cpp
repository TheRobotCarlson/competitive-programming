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
    int n, b, h, w, price, tempT, tempN, min;

    while(scanf("%d %d %d %d",&n, &b, &h, &w)==4){
        min = 200*100000;
        while(h--){
            scanf("%d", &price);
            tempT = w;
            while(tempT--){
                scanf("%d",&tempN);
                if(tempN < n){
                    continue;
                }else{
                    tempN = price*n;
                    min = (min < tempN)? min: tempN;
                }
            }
        }
        if(min <= b){
            printf("%d\n",min);
        }else{
            printf("stay home\n");
        }
    }

}