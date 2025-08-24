#include<iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    long long n, a = 2, b = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cout << a * b << '\n';
        a += 2 * (i - 1);
        b += i + 2;
    }
}
