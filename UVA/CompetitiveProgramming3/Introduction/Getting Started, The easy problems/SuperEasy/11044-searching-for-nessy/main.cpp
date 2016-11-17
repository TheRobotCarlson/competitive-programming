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
    int t, left, right;

    cin>>t;

    while(cin>>left){
        cin>>right;

        cout<<(left/3)*(right/3)<<endl;
    }

    return 0;

}