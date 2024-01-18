#include <stdio.h>
int main() {
    long long a, b, r, A, B;
    scanf("%lld%lld", &a, &b);
    A = a; B = b;
    while (b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    long long LCM = A/a*B;
    if (LCM < 0) LCM = -LCM;
    printf("%lld\n", LCM);
        
   return 0;
}