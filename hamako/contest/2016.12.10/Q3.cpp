#include <iostream>
#include <cstring>
#include <algorithm>

constexpr int MAX = 800;

int main(){
	int I = MAX, N = 0;
	int ans = 0;
	int len;
	char S[MAX];

	std::cin >> S;

	len = strlen(S);

	for(int i = 0; i < len; ++i){
		if(S[i] == 'I'){
			I = std::min(i, I);
		}
		else if(S[i] == 'N'){
			N = std::max(i, N);
		}
	}

	int R, A;
	for(int i = I + 1; i < N - 1; ++i){
		if(S[i] == 'R'){
			R = i;
			for(int j = i + 1; j < N; ++j){
				if(S[j] == 'A'){
					A = j;
					ans = std::max(ans, (R - I) * (A - R) * (N - A));
				}
			}
		}
	}

	std::cout << ans << '\n';

	return 0;
}