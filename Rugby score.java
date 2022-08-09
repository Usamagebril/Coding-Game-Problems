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

        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        for (int i = 0; i <= N / 5; i++) {
            for (int j = 0; j <= i; j++) {
                int roundPoint = N - (i * 5) - (j * 2);

                if (roundPoint >= 0 && roundPoint % 3 == 0) {
                    System.out.println(i + " " + j + " " + roundPoint / 3);
                }
            }
        }
    }
}
