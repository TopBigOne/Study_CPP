//
// Created by dev on 2022/7/12.
//

#ifndef UNIONDEMO_UINON_ARRAY_H
#define UNIONDEMO_UINON_ARRAY_H


// 每一个属性，在内存的地址，都是一样的；
union UseId2 {
    unsigned int phone;
    char passport[11];
};

#endif //UNIONDEMO_UINON_ARRAY_H
