#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for (int i = 0; i < 20; ++i) {
        a = rand(i);
    }
    int b = a % 10 + 5;
    printf("%d\n", b );
    return 0;
}



