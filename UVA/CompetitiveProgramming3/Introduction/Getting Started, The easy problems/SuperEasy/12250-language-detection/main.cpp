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
    int n=1;
    string temp;

    size_t str_hash;

   while(cin >> temp){
        if(temp[0] == '#'){
           break;
        }
        str_hash = hash<string>{}(temp);

        switch(str_hash){
            case 12936260434203040161:
                printf("Case %d: ENGLISH\n",n);
                break;
            case 3393968787623342644:
                printf("Case %d: SPANISH\n",n);
                break;
            case 16852121232717196477:
                printf("Case %d: GERMAN\n",n);
                break;
            case 2277752760842973602:
                printf("Case %d: FRENCH\n",n);
                break;
            case 6264854549860118072:
                printf("Case %d: ITALIAN\n",n);
                break;
            case 14606550046114216122:
                printf("Case %d: RUSSIAN\n",n);
                break;
            default:
                printf("Case %d: UNKNOWN\n",n);
        }

        n++;
    }


return 0;
}
