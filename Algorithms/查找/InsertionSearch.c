//
//  InsertionSearch.c
//  Algorithms
//
//  Created by Beelin on 2018/5/29.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "InsertionSearch.h"

// 插值查找
// mid=(low+high)/2, 即mid=low+1/2*(high-low) 通过类比，更进如下
// mid=low+(key-a[low])/(a[high]-a[low])*(high-low)
int InsertionSearch(int a[], int value, int low, int high)
{
    int mid = low+(value-a[low])/(a[high]-a[low])*(high-low);
    if(a[mid]==value)
        return mid;
    if(a[mid]>value)
        return InsertionSearch(a, value, low, mid-1);
    if(a[mid]<value)
        return InsertionSearch(a, value, mid+1, high);
    return -1;
}
