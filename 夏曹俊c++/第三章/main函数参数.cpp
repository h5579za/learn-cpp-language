#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "收到参数总数 (argc) = " << argc << "\n\n";

    // 循环遍历 argv 数组
    for (int i = 0; i < argc; ++i) {
        cout << "argv[" << i << "] = " << argv[i] << "\n";
    }

    return 0;
}