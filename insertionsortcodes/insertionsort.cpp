//Insertion sort in C++

#include <iostream>   //include the input-output stream for displaying the output
#include <vector>
#include <sstream>
using namespace std;

int main(){
    cout << "Enter the input: ";
    vector<int> array;
    string inputs;

    getline(cin, inputs);
    stringstream stream(inputs);

    int num;
    while (stream>>num){
        array.push_back(num);
    }

    int n = array.size();

    cout << "After sorted array: ";
    // Outer loop for iterating through each element of the array starting from index 1
    for (int i=1; i<n; i++){
        int key = array[i];    // Set the current element as the 'key'
        int j =i-1;            //// Set the index for comparison (one position before 'i')
        while(j>=0 && key<array[j]){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }

    // // Output the sorted array
    for(int k=0; k<n; k++){
        cout << array[k] << " ";
    }

    return 0;  //// Return 0 to indicate successful execution
}
