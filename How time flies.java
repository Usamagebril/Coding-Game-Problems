
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.Period;
import java.time.ZoneId;
import java.util.Scanner;
import java.time.temporal.ChronoUnit;
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {


    public static void main(String args[]) throws java.text.ParseException { try {
            
            SimpleDateFormat sdf = new SimpleDateFormat("dd.MM.yyyy");
            Scanner scan = new Scanner(System.in);
            LocalDate BEGIN = sdf.parse(scan.next()).toInstant().atZone(ZoneId.systemDefault()).toLocalDate();
            LocalDate END = sdf.parse(scan.next()).toInstant().atZone(ZoneId.systemDefault()).toLocalDate();
            
            // Write an answer using System.out.println()
            // To debug: System.err.println("Debug messages...");

            Period time = Period.between(BEGIN, END);
            long days = ChronoUnit.DAYS.between(BEGIN, END);

            StringBuilder finalString = new StringBuilder();
            if (time.getYears() > 0) {
                finalString.append(time.getYears()).append(" year").append(time.getYears() > 1 ? "s" : "").append(", ");
            }
            if (time.getMonths() > 0) {
                finalString.append(time.getMonths()).append(" month").append(time.getMonths() > 1 ? "s" : "").append(", ");
            }
            finalString.append("total ").append(days).append(" days");

            System.out.println(finalString);
        } catch (ParseException ignored) {

        }
    }
}
