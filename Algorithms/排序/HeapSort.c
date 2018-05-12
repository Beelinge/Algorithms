//
//  HeapSort.c
//  Algorithms
//
//  Created by Beelin on 2018/5/12.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include "HeapSort.h"

// 堆排序

//大根堆进行调整
void adjustHeap(int i, int j, int array[])
{
    int temp=array[i];
    for (int k=i*2+1;k<j;k=k*2+1)
    {
        //如果右边值大于左边值，指向右边
        if (k+1<j && array[k]< array[k+1])
        {
            k++;
        }
        //如果子节点大于父节点，将子节点值赋给父节点,并以新的子节点作为父节点（不用进行交换）
        if (array[k]>temp)
        {
            array[i]=array[k];
            i=k;
        }
        else
            break;
    }
    //put the value in the final position
    array[i]=temp;
}

//堆排序主要算法
void heapSort(int size,int array[])
{
    //1.构建大顶堆
    for (int i=size/2-1;i>=0;i--)
    {
        //put the value in the final position
        adjustHeap(i,size,array);
    }
    //2.调整堆结构+交换堆顶元素与末尾元素
    for (int j=size-1;j>0;j--)
    {
        //堆顶元素和末尾元素进行交换
        int temp=array[0];
        array[0]=array[j];
        array[j]=temp;
        
        adjustHeap(0,j,array);//重新对堆进行调整
    }
    
    for (int i = 0; i < size; i ++) {
        printf("array[%d]: %d\n", i,array[i]);
    }
}

