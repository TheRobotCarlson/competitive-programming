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

    int n,l;
    char str[5];

    scanf("%d",&n);
    while(n--){
        l = scanf("%s",str);

        if(l==3){
            str[4]=='\0';
        }else{
            str[3] == '\0';
        }
        string temp(str);
        if(temp.length()==3){
            if(temp[0]=='o'&&temp[1]=='n'||temp[0]=='o'&&temp[2]=='e'||temp[1]=='n'&&temp[2]=='e'){
                printf("1\n");
            }else{
                printf("2\n");
            }
        }else{
            printf("3\n");
        }
    }
    

return 0;
}
