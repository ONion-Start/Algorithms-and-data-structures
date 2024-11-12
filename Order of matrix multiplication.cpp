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
int matrixChainMultiplication(std::vector<int>& dimensions) {
    int n = dimensions.size() - 1;
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));

    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i < n - length + 1; ++i) {
            int j = i + length - 1;
            dp[i][j] = std::numeric_limits<int>::max();
            for (int k = i; k < j; ++k) {
                int cost = dp[i][k] + dp[k+1][j] + dimensions[i] * dimensions[k+1] * dimensions[j+1];
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                }
            }
        }
    }
    return dp[0][n-1];
}
