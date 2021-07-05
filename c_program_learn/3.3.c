#include <stdio.h>
int main(int argc, char const* argv[])
{
    /*
        本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：
        起步里程为3公里，起步费10元；
        超起步里程后10公里内，每公里2元；
        超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
        营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。
    */
    double mileage; //里程
    int time; //分钟
    double coast_mileage;
    scanf("%lf %d", &mileage, &time);
    //mileage = 2.6;
    //time = 2;
    if (mileage <= 3) {
        coast_mileage = 10;
    } else if (mileage <= 10) {
        coast_mileage = 10 + (mileage - 3) * 2;
    } else {
        coast_mileage = 10 + (10 - 3) * 2 + (mileage - 10) * 3;
    }
    double coast_time = (time / 5) * 2;
    printf("%.lf\n",coast_mileage+coast_time);
}