//
//  BinarySearch.c
//  Algorithms
//
//  Created by Beelin on 2018/5/29.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "BinarySearch.h"

//二分查找，递归版本
int BinarySearch2(int a[], int value, int low, int high)
{
    int mid = low+(high-low)/2;
    if(a[mid]==value)
        return mid;
    if(a[mid]>value)
        return BinarySearch2(a, value, low, mid-1);
    if(a[mid]<value)
        return BinarySearch2(a, value, mid+1, high);
    return -1;
}
