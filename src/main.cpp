#include "main.h"
void test01() {
    Matrix3d matA;      // 定义并初始化两个3x3的矩阵
    matA << 1, 2, 3,
            4, 5, 6,
            7, 8, 9;
    Matrix3d matB;
    matB << 9, 8, 7,
            6, 5, 4,
            3, 2, 1;
    Matrix3d matC = matA * matB;   // 矩阵乘法
    
    cout << "Matrix A:\n" << matA << endl;      // 输出结果
    cout << "Matrix B:\n" << matB << endl;
    cout << "Matrix C = A * B:\n" << matC << endl;
}
// main参数：例如处理数据时不需每次修改代码，只需要改传入文件名
int main(int argc,char* argv[]) {test01();}    