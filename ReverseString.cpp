
#include <iostream>
#include <cstring>

void ReverseString(const char *str) {
    if (!str || std::strlen(str) < 2) {
        std::cout << "Error" << std::endl;
        return;
    }

    int totalItems = std::strlen(str);
    char *backwards = new char[totalItems + 1]; 

    for (int i = totalItems - 1, j = 0; i >= 0; i--, j++) {
        backwards[j] = str[i];
    }

    backwards[totalItems] = '\0';  
    std::cout << backwards << std::endl;

    delete[] backwards;  

int main() {
    const char *input = "Hello";
    ReverseString(input);

    return 0;
}
