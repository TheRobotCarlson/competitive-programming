//
//  main.cpp
//  sheldon
//
//  Created by Ethan Gill on 10/29/16.
//  Copyright © 2016 Ethan Gill. All rights reserved.
//

#include <iostream>
#include <bitset>
#include <climits>
#include <stdio.h>

using namespace std;

bool getBit(int n, int bit) {
    return (n >> bit) & 1;
}

bool isSheldonNumber(int n) {
    if (n < 1) {
        return false;
    }
    
    bool oneAppears = false;
    int oneCount = 0;
    int zeroCount = 0;
    bool onePast = false;
    bool zeroPast = false;
    
    int oneTCount = 0;
    int zeroTCount = 0;
    
    for (int i = sizeof(n)*CHAR_BIT - 1; i >= 0; i--) {
        bool bit = getBit(n, i);
        
       // printf("%d",bit);
        
        //wait until the first 1 (skip all the leading 0s)
        
        if (bit) {
            
            oneAppears = true;
            if (!onePast) {
                oneCount++;
            }
            //if ones have already been recorded
            else {
                if (zeroPast && zeroTCount != zeroCount && zeroTCount != 0) {
                    return false;
                } else if (!zeroPast) {
                    zeroPast = true;
                }
                zeroTCount = 0;
                oneTCount++;
                if (oneTCount > oneCount) {
                    return false;
                }
            }
        } else {
            if (oneAppears && !zeroPast) {
                onePast = true;
                zeroCount++;
            }
            // if zeroes have already been recorded
            else if (oneAppears) {
                if (onePast && oneCount != oneTCount && oneTCount != 0) {
                    return false;
                }
                oneTCount = 0;
                zeroTCount++;
                if (zeroTCount > zeroCount) {
                    return false;
                }
            }
        }
    }
    
    //check that the last bit didn't break the A or B rules
    bool lastBit = getBit(n, 0);
    
    if (lastBit) {
        if (onePast && oneTCount != oneCount) {
            return false;
        }
    } else {
        if (zeroPast && zeroTCount != zeroCount) {
            return false;
        }
    }
    
    return true;
}

int main(int argc, const char * argv[]) {
    int lower, upper;
    while (cin >> lower >> upper) {
        int count = 0;
        for (int i = lower; i <= upper; i++) {
            if (isSheldonNumber(i)) {
                printf("%d is a sheldon number\n",i);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
