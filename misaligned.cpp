#include <assert.h>
#include <iostream>
#include <string>

const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
int numOfMajorColors = std::size(majorColor);

const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
int numOfMinorColors = std::size(minorColor);

int getPairNumFromColor(int majorIndex, int minorIndex) {
    return majorIndex * 5 + minorIndex;
}

std::string formatColorMap(int colorCode, const char* majorColor, const char* minorColor) {
    std::string colorMap = std::to_string(colorCode) + " | " + majorColor + " | " + minorColor + "\n";
    return colorMap;
}

int printColorMap() {
    int i = 0, j = 0;
    for (i = 0; i < numOfMajorColors; i++) {
        for (j = 0; j < numOfMinorColors; j++) {
            std::cout << formatColorMap(getPairNumFromColor(i, j), majorColor[i], minorColor[i]);
        }
    }

    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == (numOfMajorColors * numOfMinorColors));
    assert(formatColorMap(1, "White", "Orange")[2] == '|');
    assert(formatColorMap(15, "Violet", "Slate")[3] == '|');
    assert(getPairNumFromColor(0, 0) == 1);
    std::cout << "All is well (maybe!)\n";

    return 0;
}
