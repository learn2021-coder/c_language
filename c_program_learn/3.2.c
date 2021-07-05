#include <stdio.h>
int main(int argc, char const* argv[])
{
    /*
        按照规定，在高速公路上行使的机动车，达到或超出本车道限速的10%则处200元罚款；若达到或超出50%，就要吊销驾驶证。请编写程序根据车速和限速自动判别对该机动车的处理。
    */
    double speed, limit;
    //scanf("%lf %lf",&speed,&limit);
    speed = 110;
    limit = 100;
    if (speed < 1.1 * limit) {
        printf("OK\n");
    } else if (speed < 1.5 * limit) {
        printf("Exceed %.lf. Ticket 200", (speed - limit) / limit * 100);
    } else {
        printf("Exceed %.lf. License Revoked", (speed - limit) / limit * 100);
    }
}