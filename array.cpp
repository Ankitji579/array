#include <bits/stdc++.h>
typedef unsigned long long ll;
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();


int main(){
	
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif
	
	//Code
	
	
	cout << "\n";
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
		
	return 0;
}