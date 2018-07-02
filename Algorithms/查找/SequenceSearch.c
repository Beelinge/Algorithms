//
//  SequenceSearch.c
//  Algorithms
//
//  Created by Beelin on 2018/5/29.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "SequenceSearch.h"
//顺序查找
int SequenceSearch(int a[], int value, int n)
{
    int i;
    for(i=0; i<n; i++)
        if(a[i]==value)
            return i;
    return -1;
}
