#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    if (n == 3 || n == 2) {
        std::cout << "NO SOLUTION";
    } else {
        for (int i = n - 1; i > 0; i -= 2) {
            std::cout << i << ' ';
        }
        for (int i = n; i > 0; i -= 2) {
            std::cout << i << ' ';
        }
    }
}