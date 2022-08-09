import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        List<Horse> horses = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            horses.add(new Horse(in.nextInt(), in.nextInt()));
        }

        int closetDis = Integer.MAX_VALUE;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                closetDis = Math.min(closetDis, horses.get(i).strengthDiff(horses.get(j)));
            }
        }

        System.out.println(closetDis);
    }
}

class Horse {
    int v;
    int e;

    public Horse(int v, int e) {
        this.v = v;
        this.e = e;
    }

    int strengthDiff(Horse h) {
        return Math.abs(h.v - this.v) + Math.abs(h.e - this.e);
    }
}
