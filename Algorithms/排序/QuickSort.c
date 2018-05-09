//
//  QuickSort.c
//  Algorithms
//
//  Created by Beelin on 2018/5/9.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "QuickSort.h"

// 快速排序
void quickSort(int * array, int left, int right, int size) {
    if (left >= right) {
        return;
    }
    
    int i = left;
    int j = right;
    int key = array[left];
    
    while (i < j) {
        while (i < j && key <= array[j]) {
            j --;
        }
        array[i] = array[j];
        
        while (i < j && key >= array[i]) {
            i ++;
        }
        array[j] = array[i];
    }
    
    array[i] = key;
    
    quickSort(array, left, i - 1, size);
    quickSort(array, i + 1, right, size);
}
