#include <stdio.h>
#include <stdlib.h>

#define delta 0x9e3779b9

int main() {
    unsigned int v[9] = {0x1c425f64, 0x71a8303a, 0x71cc183, 0xcf9af608, 0x709ebe28, 0x16d2dac4, 0xc4813a4f, 0x23ee037d,
                         0xe5e4e5d1};
    unsigned int key[4] = {0x31324d31, 0x38303949, 0x3735376e, 0x7e394367};
    unsigned int sum = 0;
    unsigned int y, z, p, rounds, e;
    int n = 9;
    int i = 0;
    rounds = 6 + 52 / n;
    y = v[0];
    sum = rounds * delta;
    do {
        e = sum >> 2 & 3;
        for (p = n - 1; p > 0; p--) {
            z = v[p - 1];
            v[p] -= ((((z >> 5) ^ (y << 2)) + ((y >> 3) ^ (z << 4))) ^ ((key[(p & 3) ^ e] ^ z) + (y ^ sum)));
            y = v[p];
        }
        z = v[n - 1];
        v[0] -= (((key[(p ^ e) & 3] ^ z) + (y ^ sum)) ^ (((y << 2) ^ (z >> 5)) + ((z << 4) ^ (y >> 3))));
        y = v[0];
        sum = sum - delta;
    } while (--rounds);

    printf("ISCC{");
    for (i = 0; i < n; i++) {
        printf("%c%c%c%c", *((char *) &v[i] + 0), *((char *) &v[i] + 1), *((char *) &v[i] + 2), *((char *) &v[i] + 3));
        //printf("%c%c%c%c",*((char*)&v[i]+3),*((char*)&v[i]+2),*((char*)&v[i]+1),*((char*)&v[i]+0));

    }
    printf("}");
    return 0;
}
