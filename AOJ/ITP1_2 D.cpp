#include <iostream>

int main(){
    int w, h, x, y, r;
    std::cin >> w >> h >> x >> y >> r;

    if (r <= x && x <= w - r && r <= y && y <= h - r) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

    return 0;
}
