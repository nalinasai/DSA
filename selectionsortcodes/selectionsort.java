import java.lang.System;
import java.util.Scanner;
import java.util.ArrayList;

class selectionsort{
    public static void main(String args[]){
        
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Enter the input: ");
        String stringinput = scan.nextLine();
        String[] stringsplit = stringinput.split(" ");

        ArrayList<Integer> integerList = new ArrayList<>();

        int n = stringsplit.length;
        for (int k=0; k<n; k++){
            int num = Integer.parseInt(stringsplit[k]);
            integerList.add(num);
        }
        
        
        for(int i=0; i<n; i++){ // Outer loop to iterate through the entire array.
            int temp = i;  // Assume the current element at index i is the smallest.
            for(int j=i+1; j<n; j++){  // Inner loop to find the smallest element in the unsorted part of the array.
                if(integerList.get(temp)>integerList.get(j)){
                    temp = j;
                }
            }
            //Swap the found smallest element with the element at position i
            int temp_value = integerList.get(i);
            integerList.set(i,integerList.get(temp));
            integerList.set(temp,temp_value);
            

        }
        

        System.out.print("After sorting: ");
        for (int element: integerList){
            System.out.print(element + " ");
        }
    }
}