#include <iostream>
#include <cstdio>


void test(const char *string);

std::string test2();

std::string test3();

const char *test4();

int main() {
    std::cout << "Hello, World!" << std::endl;
    char c = 'A';
    printf("the C value is %c\n", c);

    std::string std_string = test2();

    std::string s = test2();
    printf("the std_string value is %s\n", std_string.c_str());

    test("dgfsgf\n");

    auto str3 = test3();
    std::cout << "the str3 is : " << str3 << std::endl;


    const char *test4Ptr = test4();
    printf("test4 result：-----> %s", test4Ptr);

    return 0;
}

void test(const char *string) {
    printf("the string value is : %s", string);
}

std::string test2() {
    return {"YYYYYfdsfdOOOOOO----->"};
}

std::string test3() {
    return {"test3----->"};
}

const char *test4() {
    std::string str = {"invoke the test4 "};
    const char *c = str.c_str();

    return str.c_str();
}


