#include <bits/stdc++.h>
using namespace std;
bool check(int n) {
	return n > 5;
}
int bin_search(int l, int r) {
	if(r - l <= 1) {
    	if(check(l)) return l;
        else return r;
    }
	int mid = (l + r) / 2;
    if(check(mid)) {
    	return bin_search(l, mid);
    }
    else {
		return bin_search(mid + 1, r);
    }
}
int main() {
	cout << bin_search(0, 20) << endl; // outputs 6
}