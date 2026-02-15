#include <iostream>

using namespace std;
int main() {
    
    int i;
    int array[10];
    int count_arr = 0 ;

    cout<<"------ Show the count Array ------- \n";
    for( i = 0 ; i< 10 ; i++){
        array[i] = -1;
        cout<< array[i]<<" ";
    }
    // for new line
     cout<<"\n";
    // make this for insertion array
    array[0] = 10;
    count_arr++;
    array[1] = 20;
    count_arr++;
    array[2] = 30;
    count_arr++;
    array[3] = 40;
    count_arr++;


    for ( i = count_arr ; i > 1 ; i--){
        array[i] = array[ i - 1 ];
    }
  
    array[i]=99;
    count_arr++;
    cout<<"------ Insertion Array ------- \n";
   // show the result
   for ( i = 0 ; i< 10 ; i++){
    cout << array[i]<<" ";
   }
   cout<<"\nCount_Array have: "<<count_arr;
   
    return 0;
}