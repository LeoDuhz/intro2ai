#include "node.h"

int node::type = 1; //默认选择h1启发式函数

node::node():f(0),g(0),h(0),parent(nullptr)
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            martix[i][j] = 0;
        }
    }
}

//h1:不在位置的数码个数
int node::cal_h1()
{

}

int node::cal_h2()
{

}

void update_f()
{

}