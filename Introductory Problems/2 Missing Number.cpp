#include<iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> a(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int num;
        std::cin >> num;
        a[num] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            std::cout << i;
            break;
        }
    }
    return 0;
}
