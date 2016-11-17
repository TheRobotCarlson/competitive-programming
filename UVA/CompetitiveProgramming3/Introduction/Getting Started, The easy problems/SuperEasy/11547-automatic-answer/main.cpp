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
    int k,n,m,x,y;
           
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>k;
        cout<<abs(((36962 + (315 * k))%100)/10) <<endl; 
    }
}