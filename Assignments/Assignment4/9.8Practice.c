#include <stdio.h>

int main() {

    int a = 5, b = 4, c = 3, d = 2;

    if (a <= b + 1){
        printf("\na(%i) <= b(%i) +1", a, b);
    }
    if (a < b && c > b){
        printf("\na(%i) < b(%i) AND c(%i) > b(%i)", a, b, c, b);
    }
    if (a >= c || d >= 5){
        printf("\na(%i) >= c(%i) OR d(%i) >= 5", a, c, d);
    }
    if (!(a > b)){
        printf("\na(%i) IS NOT > b(%i)", a, b);
    }
    if (b >= a && !(d < b)){
        printf("\nb(%i) >= a(%i) AND d(%i) IS NOT < b(%i)", b, a, d, b);
    }

    return 0;
}