// helloworld.cpp
#include <iostream>
using namespace std;
int main() {
    cout << " 西文：Hello, World! 中文：你好，世界！" << endl;
    // chcp 65001（转UTF-8）后，["]后面必先空一格，即现西文空格，否则乱码
    return 0;
}