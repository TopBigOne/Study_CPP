#include <iostream>

using namespace std;

int main() {
    int a = 0;
    if (a) {
        // 不会走
        cout << "handle the 0" << std::endl;
    } else {
        // 会走
        cout << "handle the 0 in else " << endl;
    }
    a = 1;
    if (a) {
        // 会走
        cout << "handle the 1" << endl;
    }

    a = -1;
    if (a) {
        // 会走
        cout << "handle the -1" << endl;
    }

    // 赋值操作
    if (a = 2000) {
        // 会走
        cout << "handle the 2000" << endl;
    }
    // 赋值操作
    if (a = 0) {
        // 不会走
        cout << "handle the 0 by else again...." << endl;
    } else {
        // 会走
        cout << "handle the non-0 by else again...." << endl;
    }
    return 0;

}
