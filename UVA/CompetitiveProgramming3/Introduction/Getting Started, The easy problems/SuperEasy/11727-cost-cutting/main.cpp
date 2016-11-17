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
        cin>>k>>x>>y;
        bool t1 = k>y;
        bool t2 = k>x;
        bool t3 = x>y;
        cout<<"Case "<<i+1<<": ";
        if(t2&&t3||!t3&&!t2){
            cout<<x<<endl;
        }else if(t1&&!t3||!t1&&t3){
            cout<<y<<endl;
        }else{
            cout<<k<<endl;
        }    
    }

    return 0;
}