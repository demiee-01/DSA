#include <iostream>
using namespace std;

void insortion_sort( int arr[], int n){

    for( int i = 1; i < n ; i++){
        int tmp = arr[i];
        int j = i;

        while( j>0 && arr[ j -1] < tmp){
            arr[i] = arr[ j - 1];
            j--;
        }

        arr[j] = tmp;
    }

}

int main(){
    int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int n = 8;

    insortion_sort(arr , n);

    cout<<"\nResult Insortion Sort ( Descending ): ";
    for(int i = 0; i< n ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}