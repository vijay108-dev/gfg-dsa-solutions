#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int start = 1;
    int end = stalls[n-1] - stalls[0];
    int ans = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        int count = 1;
        int position = stalls[0];

        for(int i = 1; i < n; i++) {
            if(stalls[i] - position >= mid) {   
                count++;
                position = stalls[i];
            }
        }

        if(count >= k) {  
            ans = mid;
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> stalls = {10, 1, 2, 7, 5};
    int k = 3;
    cout << aggressiveCows(stalls, k) << endl;
    return 0;
}


//O(nlogn+nlog(range))≈O(nlogn)
//Time complexity = O(nlogn)
//space complexity = O(1)