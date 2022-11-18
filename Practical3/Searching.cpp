#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int BinarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return BinarySearch(arr, l, mid - 1, x);
 
        return BinarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(){

    int arr[5]={12,23,34,41,52};
    int n=5;
    int key=41;


    int linear =LinearSearch(arr,n,key);

    int binary =BinarySearch(arr,0,n-1,key);

    cout<<"Linear: "<<linear<<endl;
    cout<<"Binary: "<<binary<<endl;

}