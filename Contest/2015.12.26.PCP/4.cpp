#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main(){
    int n;
    std::vector<double> vec;

    std::cin >> n;

    for(int i = 0; i < n; ++i){
        int in;
        std::cin >> in;
        vec.push_back(in);
    }

    std::sort(vec.begin(), vec.end());

    int ans;
    if(n % 2 == 1) ans = vec[n / 2];
    else{
        ans = std::round((vec[n / 2 - 1] + vec[n / 2]) / 2);
    }

    std::cout << ans << std::endl;

    return 0;
}
