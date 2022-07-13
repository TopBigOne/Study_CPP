//
// Created by dev on 2022/7/13.
//


#include "func_callback.h"
// 回调函数

/**
 *
 * @param array
 * @param arraySize
 * @param getNextValue  随机数
 */
void populate_array(int *array, size_t arraySize, int (*getNextValue)()) {
    for (size_t i = 0; i < arraySize; i++) {
        array[i] = getNextValue();
    }

}

// 获取随机值
int getNextRandomValue() {
    return rand();
}

void realFuncCallback() {
    std::cout << "函数指针作为某个函数的参数" << std::endl;
    int myArray[10];
    populate_array(myArray, 10, getNextRandomValue);
    for (int i: myArray) {
        printf("%d \n", i);
    }

}




