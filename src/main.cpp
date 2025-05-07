#include "main.h"
void test01() {
    // 定义刚体变换：旋转+平移
    Eigen::AngleAxisd rot(M_PI/4, Eigen::Vector3d::UnitZ());
    Eigen::Isometry3d T = Eigen::Isometry3d::Identity();  // 修正这里
    T.rotate(rot);
    T.pretranslate(Eigen::Vector3d(1, 2, 3));

    // 变换点
    Eigen::Vector3d p(1, 2, 1);
    Eigen::Vector3d p_transformed = T * p;

    // 输出变换矩阵和结果
    std::cout << "Transform Matrix:\n" << T.matrix() << "\n\n";
    std::cout << "Transformed point:\n" << p_transformed << std::endl;
}
int main() {test01();}