#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r, b, p, q;
	cin >> r >> b >> p >> q;
	if ((r*p) > (b*q)){
	    cout << (r*p);
	} else{
	    cout << (b*q);
	}
	return 0;
}
