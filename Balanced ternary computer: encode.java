import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        boolean neg = false ;
        if(N > 0 ){neg = false;}
        else{neg = true ;}
        N = Math.abs(N) ;
        int[] base = new int[]{0 , 1 , -1} ; 
        String answer = "";
        String strPOS = "01T";
        String strNEG = "0T1";
        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");
        do{
            int remaining = N%3 ;
            N -= base[remaining];
            answer = (neg ? strNEG.charAt(remaining) : strPOS.charAt(remaining)) + answer ;
            N = N/3 ;
        }while(N>0);
        System.out.println(answer);
    }
}
