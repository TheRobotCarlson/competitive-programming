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
    int first, second,third,fourth, total;
    
    while(cin>>first){
        cin>>second>>third>>fourth;
        if(first==0&&second==0&&third==0&&fourth==0){
            break;
        }

        total = 1080 + ((first - second + 40)%40 + (third - second + 40)%40 + (third - fourth + 40)%40)*9;
        cout<<total<<endl;
        total = 0;
    }


}
