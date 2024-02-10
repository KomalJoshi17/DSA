#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &arr , int N){
	// code here
	long cur_sum = 0;

	// find the sum for 1st window of size k
	for(int i = 0; i < K; ++i)
		cur_sum += arr[i];

	long max_sum = cur_sum;

	// keep updating cur_sum as we
	// slide through other windows
	// and track max_sum
	for(int st = 1, en = K; en < N; st++, en++) {
		cur_sum -= arr[st - 1];
		cur_sum += arr[en];

		max_sum = max(max_sum, cur_sum);
	}

	return max_sum;
}

int main() {
	// your code goes here
	int N = 6, K = 3;
	vector<int> arr = {5, 1, 2, 6, 3, 1};
	cout << maximumSumSubarray(K, arr, N);
	return 0;
}