//TC = O(N³)
//SC = O(1)
#include <iostream>
#include <algorithm>
using namespace std;
bool find4Numbers(int A[], int n, int X){
    
    sort(A,A+n);
    
    for(int i= 0;i < n - 3;i++){
        for(int j = i+1; j < n-2; j++){
            
            int start =j + 1;
            int end=n - 1;
            
            while(start<end){
                int sum=A[i] + A[j] + A[start] + A[end];
                
                if(sum==X){
                    return true;
                }
                else if(sum <X){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
    }
    
    return false;
}

int main(){
    int A[] = {1, 5, 1, 0, 6, 0};
    int n =6;
    int X =7;

    if(find4Numbers(A,n,X))
        cout << 1<< endl;
    else
        cout<< 0<< endl;

    return 0;
}