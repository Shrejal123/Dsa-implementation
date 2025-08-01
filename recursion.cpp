// print all subarrays using recursion
#include<iostream>
#include<vector>
using namespace std;

void printSubarray(vector<int>&arr, int start, int end) {
    
    if(end==arr.size()){
        return;
    }

    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    printSubarray(arr, start, end + 1);

}

int main(){
    vector<int>arr = {1, 2, 3, 4, 5,6};
    for(int start = 0; start < arr.size(); start++) {
    int end = start;
    printSubarray(arr, start, end);
    }
   
    return 0;
}
