// TEST ARRAY RETURN 200520!
// SungwookLE

#include <iostream>
#include <vector>
#include <string>

using std::cout;

int* arr_func(int *vec, int size_n){
    int *ans = vec;

    for ( int i = 0 ; i<size_n ; i++)
    {
        cout << ans[i] << "\n";
        ans[i]+=1;
    }


    return ans;
}

int main(){
    int arr[]={1,2,3,4,5};
    int *pt_ar=new int[5];

    pt_ar = arr_func(arr,5);

    for (int i =0 ; i < 5 ; i++)        
        cout << pt_ar[i]  << std::endl;
     
    
    return 0;
}