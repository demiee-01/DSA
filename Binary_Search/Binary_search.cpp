#include <iostream>
using namespace std;


    int arr[20] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 
               55, 60, 65, 70, 75, 80, 85, 90, 95, 100};


    int binary_Search(int Keysearch){
    int lower_Bound = 0;
    int upper_Bound = 19;
    int curIn;

    while(true){
        curIn = (lower_Bound + upper_Bound) / 2;

        if(arr[curIn] == Keysearch){
            return curIn;
        }
        else if( lower_Bound > upper_Bound){
            return -1;
        }else{
            if( arr[curIn] < Keysearch){
                lower_Bound = curIn + 1;
            }else{
                upper_Bound = curIn -1 ;
            }
        }
        
    }
}


// call function binary_search

int main() {
    int result = binary_Search(25);
    if(result != -1){
        cout<<"Found at index:"<< result;
    }else{
        cout<<"Not Found index";
    }
}