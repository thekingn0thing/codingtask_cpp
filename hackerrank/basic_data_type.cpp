#include <iostream>
#include <cstdio>
using namespace std;

void read_and_print_types(){
    int i;
    long l;
    char ch;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", ch);
    printf("%f\n", f);
    printf("%lf\n", d);

}
