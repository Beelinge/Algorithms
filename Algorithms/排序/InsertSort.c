//
//  InsertSort.c
//  Algorithms
//
//  Created by Beelin on 2018/2/28.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "InsertSort.h"

// 插入排序
void insertSort(int *array, int size) {
    int preIndex, current;
    for (int i = 1; i < size; i ++) {
        preIndex = i - 1;
        current = array[i];

        while (preIndex >= 0 && array[preIndex] > current) {
            array[preIndex+1] = array[preIndex];
            preIndex--;
        }
        array[preIndex + 1] = current;
    }

    for (int i = 0; i < size; i ++) {
        printf("array[%d]: %d\n", i,array[i]);
    }
}
