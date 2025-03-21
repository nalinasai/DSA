#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void merge(vector<int>& vec, int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int larr[n1];
    int rarr[n2];

    for(int x=0; x<n1; x++){
        larr[x] = vec[l+x];
    }

    for(int x=0; x<n2; x++){
        rarr[x] = vec[mid+1+x];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(larr[i]<rarr[j]){
            vec[k] = larr[i];
            i++;
            k++;

        }
        else{
            vec[k] = rarr[j];
            j++;
            k++;

        }


    }

    while(i<n1){
        vec[k] = larr[i];
        i++;
        k++;
    }

    while(j<n2){
        vec[k] = rarr[j];
        j++;
        k++;
    }

}

void mergesort(vector<int>& vec, int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort(vec, l, mid);
        mergesort(vec, mid+1, r);
        merge(vec, l, mid, r);
    }
}

int main(){
    cout<<"Enter the integers you wangt to sort: ";
    string strinput;
    
    getline(cin,strinput);
    istringstream ss(strinput);

    vector<int> vecinput;
    int num;
    while(ss>>num){
        vecinput.push_back(num);
    }

    int n = vecinput.size();

    mergesort(vecinput, 0, n-1);

    cout<<"Here is your output: ";
    for(int p=0; p<n; p++){
        cout<<vecinput[p]<<" ";
    }

}