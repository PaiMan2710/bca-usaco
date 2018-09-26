#include <bits/stdc++.h>
#define START auto start = high_resolution_clock::now();
#define STARTn start = high_resolution_clock::now();
#define STOP auto stop = high_resolution_clock::now();auto span = duration_cast<milliseconds>(stop - start);cout << span.count() << endl;
using namespace std;
using namespace std::chrono;
int compPow(int N, int deg) {
	if(deg == 0) return 0;
	int ans = 0;
	for(int i = 0; i <= N; i++) {
		ans += compPow(N, deg - 1);
	}
}
int tests(int N, int a, int b) {
	for(int i = a; i <= b; i++) {
		cout << "N^" << i << " for N = " << N << ": " << endl;
		START
		compPow(N, i);
		STOP
	}
}
int main() {
	for(int i = 0; i <= 1000; i += 100) {
		tests(i, 3, 3);
	}
}