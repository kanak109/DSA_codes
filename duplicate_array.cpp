#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[10] = {2, 3, 5, 6, 1, 5, 1, 4, 7, 2};

//    for(int i=0; i < 10; i++){
//        cin >> ar[i];
//    }

    // print elements

//    cout<< "Array elements are: \n" ;
//    for(int i=0; i < 10; i++){
//        cout << ar[i] << endl;
//    }

    /* Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted */

    sort(ar, ar+10);

    cout<< "Sorted Array elements are: \n" ;
    for(int i=0; i < 10; i++){
        cout << ar[i] << "\t";
    }

    int index;
    for(int i=0; i < 10; i++){

        index = abs(ar[i]);

        if(ar[index]<0){
           // return index;
            cout << "\n\nDuplicate: " << index ;
        }
        else {
            ar[index] = - ar[index];
        }

    }

    return 0;
}


//////////////// REMOVE DUPLICATE FROM ARRAY ///////////////////

int removeDuplicates(int* nums, int numsSize){
    int count = 0 ;

    for(int i=1; i<numsSize; i++){
        if(nums[i]!= nums[count]){

            count++ ;
            nums[count] = nums[i] ;

        }
    }
    return count+1;

}
















