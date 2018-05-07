//
//  BubbleSort.c
//  Algorithms
//
//  Created by Beelin on 2018/5/3.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "BubbleSort.h"

// 冒泡排序
void bubbleSort(int *array, int size) {
    for (int i = 0; i < size; i ++) {
        for (int j = 0 ; j < size - i - 1 ; j ++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                
            }
        }
    }

    for (int i = 0; i < size; i ++) {
        printf("array[%d]: %d\n", i,array[i]);
    }
}

void bubbleSort_2(int *array, int size) {
    int flag = 0; // 标记
    for (int i = 0; i < size; i ++) {
        for (int j = 0 ; j < size - i - 1 ; j ++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                flag = 1;
            }
        }
        
        if (flag == 0) {
            break;
        }
    }
    
    for (int i = 0; i < size; i ++) {
        printf("array[%d]: %d\n", i,array[i]);
    }
}
