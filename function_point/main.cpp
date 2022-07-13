#include <iostream>
#include <cmath>
#include "func_callback.h"

/**
 * 函数指针
 * @param x
 * @param y
 * @return
 */
int getMax(int x, int y) {
    int a = 10;
    return fmax(x, y);
}


void testFuncCallback() {
    realFuncCallback();
}

int main() {
    int (*tt)(int, int) = &getMax;
    int a = 10;
    int b = 34;
    int maxValue = tt(a, b);
    std::cout << "maxValue : " << maxValue << std::endl;
    testFuncCallback();
    return 0;
}
