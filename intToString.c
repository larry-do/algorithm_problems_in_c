#include <stdio.h>

int main() {
    int x = 5;
    char * x_str = new char[2];
    int chars_written = sprintf(x_str, "%d", x);
    return 0;
}
