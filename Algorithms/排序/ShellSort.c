//
//  ShellSort.c
//  Algorithms
//
//  Created by Beelin on 2018/3/5.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "ShellSort.h"

void ShellSort(int *array, int length) {
    int increment;
    int i,j;
    int temp;
   
    for(increment = length/2; increment > 0; increment /= 2) {
        // i从第step开始排列，应为插入排序的第一个元素
        // 可以先不动，从第二个开始排序
        for(i = increment; i < length; i++)
        {
            temp = array[i];
            for(j = i - increment; j >= 0 && temp < array[j]; j -= increment)
            {
                array[j + increment] = array[j];
            }
            array[j + increment] = temp; //将第一个位置填上
        }
    }
}
