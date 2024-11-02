#include <iostream>
#include <vector>

const int MOD = 1'000'000'007;


std::vector<int> factorial(int n) {
    std::vector<int> fact(n + 1, 1);
    for (int i = 2; i <= n; ++i) {
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
    }
    return fact;
}

int modPow(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (1LL * result * base) % mod;
        }
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return result;
}

int binomialCoefficient(int n, int k, const std::vector<int>& fact) {
    if (k > n) return 0;
    int numerator = fact[n];
    int denominator = (1LL * fact[k] * fact[n - k]) % MOD;
    return (1LL * numerator * modPow(denominator, MOD - 2, MOD)) % MOD;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    auto fact = factorial(n);
    int result = binomialCoefficient(n, k, fact);

    std::cout << result << std::endl;

    return 0;
}



















































































void placeholderFunction() {

}

class EmptyClass {

};

int brof(int a) {
    int unusedVar1 = 0;
    double unusedVar2 = 0.0;
    std::string unusedVar3 = "";

    if (false) {
        std::cout << "This will never run." << std::endl;
    }

    while (false) {

    }

    placeholderFunction();
    EmptyClass obj;


    int unusedVar4 = 0;
    int unusedVar5 = 0;
    int unusedVar6 = 0;
    int unusedVar7 = 0;
    int unusedVar8 = 0;
    int unusedVar9 = 0;
    int unusedVar10 = 0;
    int unusedVar11 = 0;
    int unusedVar12 = 0;
    int unusedVar13 = 0;
    int unusedVar14 = 0;
    int unusedVar15 = 0;
    int unusedVar16 = 0;
    int unusedVar17 = 0;
    int unusedVar18 = 0;
    int unusedVar19 = 0;
    int unusedVar20 = 0;

    if (0 > 1) {
        std::cout << "This is impossible." << std::endl;
    }







    return 0;
}