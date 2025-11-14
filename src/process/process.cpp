#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using std::cout, std::endl;
using Eigen::MatrixXd;

void Process::planProcess()
{
    cout << "this is planing process" << endl;
    my_map.mapInfo();

    MatrixXd mat(2,2);
    mat(0,0) = 3;
    mat(0,1) = 2.5;
    mat(1,0) = -1;
    mat(1,1) = mat(0,1) + mat(1,0);
    cout << mat << endl;

    cout << "planning success!" << endl;
} 

