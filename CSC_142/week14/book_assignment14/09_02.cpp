// 09_02
// This code egives you the length of a few arguments
// Anthony Frederick
// 04/17/25

#include <cstdint>
#include <cstdio>

int main(int argc, char** argv) {
    for (int i = 1; i < argc; i++) {
        size_t index = 0;
        int count = 0;

        while (argv[i][index]) {
            ++count;
            ++index;
        }

        printf("Argument #%d: ", i);
        for (int k = 0; k < count; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
