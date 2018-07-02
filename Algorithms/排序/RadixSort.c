//
//  RadixSort.c
//  Algorithms
//
//  Created by Beelin on 2018/5/22.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "RadixSort.h"

// 基数排序
// p: 位数
// k: 基数 10
int radixSort(int *data, int size, int p, int k)
{
    int *counts, *temp;
    int index, pval, i, j, n;
    
    /*为计数器数组分配空间*/
    if((counts = (int *)malloc(k * sizeof(int))) == NULL)
        return -1;
    /*为已排序元素集分配空间*/
    if((temp = (int *)malloc(size * sizeof(int))) == NULL)
        return -1;
    
    /*从元素的最低位到最高位开始排序*/
    for(n=0; n<p; n++)
    {
        /*初始化计数器*/
        for(i=0; i<k; i++)
            counts[i] = 0;
        /*计算位置值（幂运算k的n次方）*/
        pval = (int)pow((double)k,(double)n);
        
        /*统计当前位上每个数值出现的次数*/
        for(j=0; j<size; j++)
        {
            index = (int)(data[j] / pval) % k;
            counts[index] = counts[index]+1;
        }
        /*计算偏移量（本身的次数加上前一个元素次数）*/
        for(i=1; i<k; i++)
            counts[i] = counts[i] + counts[i-1];
        
        /*使用计数器放置元素位置*/
        for(j=size-1; j>=0; j--)
        {
            index = (int)(data[j] / pval) % k;
            temp[counts[index]-1] = data[j];
            counts[index] = counts[index] - 1;
        }
        
        /*将已排序元素拷贝回data*/
        memcpy(data, temp, size*sizeof(int));
        
    }
    
    for (int i = 0; i < size; i ++) {
        printf("array[%d]: %d\n", i,data[i]);
    }
    
    /*释放已排序空间*/
    free(counts);
    free(temp);
    
    return 0;
}
