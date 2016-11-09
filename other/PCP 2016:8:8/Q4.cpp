#include <iostream>
#include <algorithm>

constexpr int MAX_HW = 2000;

int H, W, d, N, map[MAX_HW][MAX_HW]{};
int s[MAX_HW][MAX_HW];

int main(){
    std::cin >> H >> W >> d >> N;
    for(int i = 0; i < N; ++i){
        int x, y;
        std::cin >> y >> x;
        ++map[y - 1][x - 1];
    }
    for(int i = 0; i < W; ++i){
        for(int j = 0; j < H; ++j){
            s[i][j] += s[i - 1][j] + map[i][j];
        }
    }
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            s[i][j] += s[i][j - 1] + map[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < H - d; ++i){
        for(int j = 0; j < W - d; ++j){
            ans = std::max(ans, s[i + d - 1][j + d] - s[i - 1][j - 1] - s[i][j + d] - s[i + d][j]);
        }
    }
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            std::cout << "i " << i << " j " << j << " s[i][j] " << s[i][j] << std::endl;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}