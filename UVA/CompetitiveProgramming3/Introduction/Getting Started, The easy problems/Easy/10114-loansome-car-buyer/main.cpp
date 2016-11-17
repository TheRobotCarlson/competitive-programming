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
    int months, n, tempMon, paid, lastMon;
    float downPay, amountOwed, tempInt, carWorth, lastInt, payments;
    bool found = false;

    scanf("%d %f %f %d", &months, &downPay, &amountOwed, &n);
    carWorth = amountOwed + downPay;
    payments = amountOwed/months;
    scanf("%d %f", &tempMon, &tempInt); //zeroth
    carWorth *= (1 - tempInt);
    lastInt = tempInt;
    lastMon = 1;

//    printf("worth: %f, owed: %f, month: %d\n",carWorth, amountOwed, 0);

    while(months > 0){
        if(amountOwed < carWorth && !found){
            found = true;
            printf("%d months\n",0);
        }
        for(int i = 0; i< n-1;i++){
            scanf("%d %f", &tempMon, &tempInt);
            if(!found){
                for(int j=lastMon; j<tempMon;j++){
                    
                    carWorth *= (1 - lastInt);
                    amountOwed -= payments;
                  //  printf("worth: %f, owed: %f, month: %d\n",carWorth, amountOwed, j);
              
                    if(amountOwed < carWorth && !found){
                        found = true;
                        printf("%d month", j);
                
                        if(j != 1){
                            printf("s");
                        }
                        printf("\n");
                        break;
                    }
                }
            }
            lastMon = tempMon;
            lastInt = tempInt;
        }
        if(!found){
            for(int j =tempMon;j<101;j++){
                carWorth *= (1 - tempInt);
                amountOwed -= payments;
               // printf("worth: %f, owed: %f, month: %d\n",carWorth, amountOwed, j);
          
                if(amountOwed < carWorth && !found){
                    found = true;
                    printf("%d month",j );
                    
                    if(j != 1){
                        printf("s");
                    }
                    printf("\n");
                    break;
                }
                
            }
        }
        scanf("%d %f %f %d", &months, &downPay, &amountOwed, &n);
        carWorth = amountOwed + downPay;
        payments = amountOwed/months;
        scanf("%d %f", &tempMon, &tempInt); //zeroth
        carWorth *= (1 - tempInt);
        lastInt = tempInt;
        found = false;
        lastMon = 1;
        
        //printf("worth: %f, owed: %f, month: %d\n",carWorth, amountOwed, 0);
    }

    return 0;
}