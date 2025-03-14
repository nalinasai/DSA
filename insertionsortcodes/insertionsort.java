import java.lang.System;
import java.util.Scanner;
import java.util.ArrayList;

public class insertionsort{
    public static void main(String args[]){
        
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the input: ");
        String stringinput= scan.nextLine();
        String[] stringsplit = stringinput.split(" ");

        // Get the size of the array
        int n = stringsplit.length;

        ArrayList<Integer> integerList = new ArrayList<>();

        for(int k=0; k<n; k++){
            int num = Integer.parseInt(stringsplit[k]);
            integerList.add(num);
        }
    
        for(int i=1; i<n; i++){
            // Store the current element as the key
            int key = integerList.get(i);
            int j = i-1;

            while(j>=0 && key<integerList.get(j)){
                integerList.set(j+1,integerList.get(j));
                j--;
            }
            // Insert the key at the correct position in the sorted part of the array
            integerList.set(j+1, key);

        }

        System.out.print("After sorting: ");
        for(int number: integerList){
            System.out.print(number + " ");
        }
    }
}