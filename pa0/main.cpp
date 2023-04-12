#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    const float pi = acos(-1);
    Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
    float angle = 45.0/180.0*pi;
    Eigen::Matrix3f t1,t2;
    t1 << cos(angle), -sin(angle), 0.0,
          sin(angle), cos(angle), 0.0,
          0.0,0.0,1.0;
    t2 << 1.0, 0.0, 1.0,
          0.0, 1.0, 2.0,
          0.0, 0.0, 1.0;
    std::cout << t2 * t1 * p << std::endl;
    return 0;
}