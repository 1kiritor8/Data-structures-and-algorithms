#include<iostream>
#include<cstdio>

int main() {
    int x = 0;
    int a = 0;
    int y = 0;
    int b = 0;
    float z = 0.0;

    std::cin >> x >> a >> y >> b;
    if(x > y) {
        if(a < b) {
            if((a*x) < (b*y)) {
                z=75.00;
            }
        }
    }

    printf("%.2lf\n",z);

    return 0;
}