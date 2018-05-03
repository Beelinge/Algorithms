//
//  7Reverse Integer.c
//  Algorithms
//
//  Created by Beelin on 2018/2/23.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    long long val = 0;
    do {
        val = val * 10 + x % 10;
        x /= 10;
    } while (x);
    return (val > INT_MAX || val < INT_MIN) ? 0 : val;
}
