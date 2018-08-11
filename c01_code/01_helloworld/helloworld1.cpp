// helloworld.cpp
#include <iostream>
using namespace std;
int main() {
    cout << " 西文：Hello, World! 中文：你好，世界！" << endl;
    // 无需chcp 65001（转UTF-8），此文 ANSI-GB2312
    return 0;
}