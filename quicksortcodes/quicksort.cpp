//quicksort 

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int partition(vector<int>& vecinput, int low, int high){
    int pivot=vecinput[low];
    int i=low+1;
    int j=high;

    while(true){
        while(i<=high && pivot>=vecinput[i]){
            i++;
        }

        while(j>=low && pivot<vecinput[j]){
            j--;
        }

        if(i>j){
            break;
        }
        swap(vecinput[i],vecinput[j]);

    }
    swap(vecinput[j],vecinput[low]);
    return j;
    
}


void quicksort(vector<int>& vecinput,int low,int high){
    if(low<high){
        int pi = partition(vecinput,low, high);
        quicksort(vecinput,low,pi-1);
        quicksort(vecinput,pi+1,high);
    }
}


void display(vector<int>& vecinput,int n){
    for(int k=0; k<n; k++){
        cout<<vecinput[k]<<" ";
    }
}

int main(){
    string inputstr;
    cout<<"Enter the integers with spaces: ";
    getline(cin,inputstr);

    vector<int> vecinput;
    istringstream ss(inputstr);
    
    int num;
    while(ss>>num){
        vecinput.push_back(num);
    }

    int length=vecinput.size();
    quicksort(vecinput,0,length-1);

    display(vecinput,length);
}