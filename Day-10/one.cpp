#include<iostream>
using namespace std;
int maxDiff(vector<int> &arr){
    int n =arr.size();

	int ans = INT_MIN;
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){ 
	       
	        if(arr[j] >arr[i]){
	            ans= max(ans, arr[j]-arr[i]);
	        }
	    }
	}
	return ans;
}

//TC = O(n^2)


// 	vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
// 	cout << maxDiff(arr) <<endl;
// 	return 0;
// }

// int maxDiff(vector<int> &arr){
//     int n = arr.size();
//     int minElement = arr[0];
//     int ans = INT_MIN;

//     for(int i = 1; i < n; i++){
//         ans = max(ans, arr[i] - minElement);
//         minElement = min(minElement, arr[i]);
//     }

//     return ans;
// }

//TC=O(n)