#include <iostream>
using namespace std;


void bubble_Sort( int arr[] , int n){
    for(int  i = 0; i< n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if( arr[j] < arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j +1 ];
                arr[j + 1] = tmp;

            }
        }
    }

}

int main(){
    int n;
    int* arr = new int[n];
    cout<<"Enter number of element: ";
    cin>>n;

    cout<<"Enter"<< n <<"number: ";
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }


    bubble_Sort( arr , n);
    cout<<"Sortted Array (Ascending): ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    

}
