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
           
        while(cin>>k){
            if(k==0){
                return 0;
            }
            cin >> n>>m;
    for(int i=0;i<k;i++){
        

            cin>>x>>y;
            if(x==n || y==m){
                cout<<"divisa"<<endl;
            } else if(x > n && y>m){
                cout<<"NE"<<endl;
            } else if(x> n && y<m){
                cout<<"SE"<<endl;
            } else if(x<n && y>m ){
                cout<<"NO"<<endl;
            } else {
                cout<<"SO"<<endl;
            }

        }

    }

    return 0;
}