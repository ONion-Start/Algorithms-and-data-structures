#include <iostream>
#include <vector>
#include <limits>
#include <fstream>
int matrixChainMultiplication(std::vector<int>& dimensions);


int main() {
    std::fstream in("input.txt");
    std::ofstream out("output.txt");
    int s;
    in>>s;
    std::vector<int> dimensions(s + 1);

    for (int i = 0; i < s; ++i) {
        in >> dimensions[i] >> dimensions[i + 1];
    }

    int result = matrixChainMultiplication(dimensions);
    out<< result;
    in.close();
    out.close();
    return 0;
}
