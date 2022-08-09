import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {
    static double distance(double lonA, double latA, double lonB, double latB){
        double x = (lonB-lonA)*Math.cos((latA+latB)/2);
        double y = latB - latA;
        return Math.sqrt(Math.pow(x,2) + Math.pow(y,2)) * 6371;
    }
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        Double lon = new Double(in.next().replace(',', '.'));
        Double lat = new Double(in.next().replace(',', '.'));
        int N = in.nextInt();
        Double min = Double.POSITIVE_INFINITY;
        String result = "";
        Double dis;
        if (in.hasNextLine()) {
            in.nextLine();
        }
        for (int i = 0; i < N; i++) {
            String[] defib = in.nextLine().replace(',', '.').split(";");
            dis = distance(lon , lat, new Double(defib[4]), new Double(defib[5]));
            if (dis < min) {
                min = dis;
                result = defib[1];
            }
        }


        // Write an answer using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.println(result);
    }
}
