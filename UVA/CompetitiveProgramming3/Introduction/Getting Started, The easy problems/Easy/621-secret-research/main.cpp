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
    int n, s;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s);
         int begin = s%10;

        if(s ==1 || s==4 || s== 78 ){
            printf("+");
        } else if((s/10)%10 ==3 && begin == 5){ // S35
            printf("-");
        } else {
            int end = s;
            
            while(end>999){
                end /= 10;
            }
            
            if((end/100) == 9 && begin == 4){
                printf("*");   
            }else if(end == 190) {
                printf("?");
            } else{
                printf("?");
            }
            //else{
            //    if(begin==5){ // (s/10)%10 ==3
             //       printf("-");
              //  }else if(end/100 ==9){ // ||begin == 4
               //     printf("*");
               // }else {
                //    printf("?");
                //}
            //}
        }

        printf("\n");
    }

    return 0;
}