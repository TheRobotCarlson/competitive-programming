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
    char c;
    bool p = false;
    
    while(cin>>noskipws>>c){
        if(c=='"'){
            if(p){
                p=false;
                cout<<"''";
            }else{
 cout<<"``";
 p=true;
            }
           
        }else{
            cout<<c;
        }
    }

}
