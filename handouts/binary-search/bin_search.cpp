#include <bits/stdc++.h>
using namespace std;
int a[50];
int binary_search(int l, int r, int k) {
	// we know k is among a[l], a[l+1], ... , a[r]

	// arrays of size 1 or 2 (which can't be reduced further)
    if (r-l <= 1) {
        if (a[r] == k)
            return r;
        else
            return l;
    }
    int mid = (l+r)/2; // middle index
    if (a[mid] == k) // found
    	return mid;
    if (a[mid] > k) // in left half
    	return binary_search(l, mid, k);
    if (a[mid] < k) // in right half
    	return binary_search(mid, r, k);
}
int main() { // tests binary_search function
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    cout << binary_search(0, 4, 3) << endl; // outputs 2
}