#include<iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;
    if (n % 4 == 1 || n % 4 == 2) {
        std::cout << "NO" << '\n';
    } else {
        std::cout << "YES" << '\n';
        if (n % 4 == 0) {
            std::cout << n / 2 << '\n';
            for (int i = 1; i <= n / 4; i++) {
                std::cout << i << ' ' << n - i + 1 << ' ';
            }
            std::cout << '\n' << n / 2 << '\n';
            for (int i = n / 4 + 1; i <= n / 2; i++) {
                std::cout << i << ' ' << n - i + 1 << ' ';
            }
        } else {
            std::cout << n / 2 + 1 << '\n';
            for (int i = 1; i <= (n + 1) / 4; i++) {
                std::cout << i << ' ' << n - i << ' ';
            }
            std::cout << '\n' << n / 2 << '\n';
            for (int i = (n + 1) / 4 + 1; i <= n / 2; i++) {
                std::cout << i << ' ' << n - i << ' ';
            }
            std::cout << n;
        }
    }
}