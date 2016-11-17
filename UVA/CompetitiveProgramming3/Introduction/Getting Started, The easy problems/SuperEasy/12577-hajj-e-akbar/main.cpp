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

int l=6,c=1;
string temp;

cin >> temp;

l=temp.length();
while(l>=4){
    if(l==4){
        printf("Case %d: Hajj-e-Akbar\n", c);
    }else{
        printf("Case %d: Hajj-e-Asghar\n", c);
    }
    c++;
    
cin >> temp;

l=temp.length();
}

return 0;
}
