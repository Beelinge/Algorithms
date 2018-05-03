//
//  main.c
//  Algorithms
//
//  Created by Beelin on 2018/2/23.
//  Copyright © 2018年 Beelin. All rights reserved.
//

#include <stdio.h>

#include "7Reverse Integer.h"
#include "InsertSort.h"
#include "SelectSort.h"
#include "ShellSort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
//    printf("%d", reverse(2));
    
    int array[9] = {1,4,5,2,3,6,9,8,7};
//    insertSort(array, 9);
//    selectSort(array, 9);
    ShellSort(array, 9);
    return 0;
}
