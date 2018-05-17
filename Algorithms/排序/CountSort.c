//
//  CountSort.c
//  Algorithms
//
//  Created by Beelin on 2018/5/17.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "CountSort.h"

// 计数排序
// 复杂度：O（n+k），n为要排序的元素个数，k为data中最大的整数加1。
int countSort(int *data, int size, int k)
{
    int *counts,
    *temp;
    
    int i,j;
    
    /*为计数器数组分配空间*/
    if((counts = (int *)malloc(k * sizeof(int))) == NULL)
        return -1;
    
    /*为已排序元素临时存放数组分配空间*/
    if((temp = (int *)malloc(size * sizeof(int))) == NULL)
        return -1;
    
    /*初始化计数数组*/
    for(i = 0; i < k; i++)
    {
        counts[i] = 0;
    }
    
    /*统计每个元素出现的次数（counts的下标索引即是要统计的元素本身）*/
    for(j=0; j<size; j++)
        counts[data[j]]=counts[data[j]] + 1;
    
    /*将元素本身的次数加上它前一个元素的次数(得到元素偏移量)*/
    for(i = 1; i < k; i++)
        counts[i]=counts[i] + counts[i-1];
    
    /*关键代码：使用上面得到的计数数组去放置每个元素要排序的位置*/
    for(j = size -1; j >= 0; j--)
    {
        temp[counts[data[j]]-1] = data[j];      /*counts的值是元素要放置到temp中的偏移量*/
        counts[data[j]] = counts[data[j]] - 1;  /*counts的计数减1*/
    }
    
    /*将ctsort已排序的元素从temp拷贝回data*/
    memcpy(data,temp,size * sizeof(int));
    
    /*释放前面分配的空间*/
    free(counts);
    free(temp);
    
    return 0;
}
