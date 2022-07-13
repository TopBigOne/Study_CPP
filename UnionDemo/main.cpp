#include <iostream>

// 每一个属性，在内存的地址，都是一样的；
union UseId {
    unsigned int phone;
    char passport[11];
};

struct owner {
    char id[20];
};

struct leaser {
    char name[100];
};
// 这个data 在同一时刻，要么是owner ,要么是leaser;
union data {
    struct owner owner;
    struct leaser leaser;
};

void strcpy2(char passport[11], const char *string);

int main() {
    // 初始化
    union UseId useId{};
    union UseId *pUseId;
    strcpy2(useId.passport, "china");
    useId.phone = 13511112222;
    pUseId = &useId;
    strcpy2(pUseId->passport, "china");;
    pUseId->phone = 2222222;

    union UseId uid[3];

    pUseId = &uid[0];

    strcpy2(uid[0].passport, "USA");
    uid[1].phone = 23214325;

    strcpy2(uid[0].passport, "Janpan");
    int a = 0;


    return 0;
}

void strcpy2(char passport[11], const char *string) {

}
