//
// Created by dev on 2022/7/13.
//

#ifndef FUNCTION_POINT_FUNC_CALLBACK_H
#define FUNCTION_POINT_FUNC_CALLBACK_H


#include <stdlib.h>
#include <stdio.h>
#include <iostream>

// int (*(*(*pfunc)(int *))[5])(int *);


/**
 *
 * @param array
 * @param arraySize
 * @param getNextValue  随机数
 */
void populate_array(int *array, size_t arraySize, int (*getNextValue)());

// 获取随机值
int getNextRandomValue();

void realFuncCallback();


#endif //FUNCTION_POINT_FUNC_CALLBACK_H
