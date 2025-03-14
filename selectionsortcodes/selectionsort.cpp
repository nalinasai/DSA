#include <iostream> //include the iostream library for the input output operations
#include <vector>
#include <sstream>
using namespace std; // Use the standard namespace to avoid writing 'std::' before each standard function.

int main(){
    
    cout << "Enter the input: ";
    vector<int> unsorted_array;
    string inputs;

    getline(cin, inputs);
    stringstream ss(inputs);

    int num;
    while(ss>>num){
        unsorted_array.push_back(num);
    }

    int n = unsorted_array.size();
    cout<< "Sorted array: ";
    for(int i=0; i<n; i++){ // Outer loop to iterate through the entire array.
        int temp =i;   // Assume the current element at index i is the smallest.
        for (int j=i+1; j<n; j++){   // Inner loop to find the smallest element in the unsorted part of the array.
            if(unsorted_array[temp]>unsorted_array[j]){
                temp = j;
            }
            else{
                continue;
            }
        }
         // Swap the found smallest element with the element at index 'i'.
        swap(unsorted_array[temp],unsorted_array[i]);
    }

    for (int i=0; i<unsorted_array.size(); i++){
        cout << unsorted_array[i]<<" ";
    }

}


