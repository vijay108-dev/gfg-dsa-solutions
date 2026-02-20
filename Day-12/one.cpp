#include<iostream>
#include<vector>
using namespace std;
    bool hasTripletSum(vector<int> &arr, int target){
        int n =arr.size();
        sort(arr.begin(),arr.end());
        for(int i= 0; i < n-2;i++){

            int start = i+1;
            int end = n- 1;

            while(start < end){
                int sum=arr[i] + arr[start] + arr[end];

                if(sum==target) 
                    return true;
                else if(sum <target) 
                    start++;
                else
                    end--;
            }
        }
        return false;
    }
int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int target = 13;

    if(hasTripletSum(arr,target))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

//Time Complexity
//O(n²)
//(because n² > n log n, so dominant term n² hota hai)

//SC = O(1)