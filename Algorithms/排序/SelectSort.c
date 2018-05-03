//
//  SelectSort.c
//  Algorithms
//
//  Created by Beelin on 2018/3/2.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "SelectSort.h"

// 选择排序
void selectSort(int *array, int size) {
    int minIndex = 0;
    for (int i = 0; i < size; i ++) {
        int temp = array[i];
        int j = i;
        minIndex = i;
        while (j < size) {
            int jvalue = array[j];
            int minvalue = array[minIndex];
            if (minvalue > jvalue) {
                minIndex = j;
            }
            j++;
        }
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
    
    for (int i = 0; i < size; i ++) {
        printf("array[%d]: %d\n", i,array[i]);
    }
}
