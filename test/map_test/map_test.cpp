#include<iostream>
#include "pnc_map.h"
using std::cout, std::endl;

void mapTest()
{
    cout << "this is pnc_map test" << endl;
    PNC_Map test_map;
    test_map.mapInfo();
}

int main()
{
    mapTest();
    return 0;
}