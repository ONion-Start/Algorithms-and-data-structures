#include <iostream>
#include <vector>

const int MOD = 1'000'000'007;


std::vector<int> factorial(int n);

int binomialCoefficient(int n, int k, const std::vector<int>& fact);

int modPow(int base, int exp, int mod);


int main() {
    int n, k;
    std::cin >> n >> k;

    auto fact = factorial(n);
    int result = binomialCoefficient(n, k, fact);

    std::cout << result << std::endl;

    return 0;
}
