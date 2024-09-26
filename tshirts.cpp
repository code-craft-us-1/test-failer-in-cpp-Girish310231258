#include <assert.h>
#include <iostream>

// Returns the size of a t-shirt based on the chest measurement
char size(int cms) {
    char sizeName = '\0';
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(size(37) == 'S');
    assert(size(38) == 'S' || size(38) == 'M');
    assert(size(40) == 'M');
    assert(size(41) == 'M');
    assert(size(42) == 'M' || size(42) == 'L');
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";

    return 0;
}
