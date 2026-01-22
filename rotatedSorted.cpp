#include<bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int target){
    int low=0;int high=arr.size()-1,ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<arr[high]){
            if(target>=arr[low] && target<arr[mid]) high=mid-1;
            else low=mid+1;
        }
        else {
            if(target>=arr[mid] && target<arr[high]) high--;
            else high=mid-1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr={6,7,8,11,-2,0,3};
    int key=6;
    cout<<search(arr,key);
}