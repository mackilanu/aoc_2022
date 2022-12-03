import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new FileReader("data.in"));
        String line = r.readLine();
        int sum = 0;
        ArrayList<Character> dups = new ArrayList<>();
        while(line != null) {
            String c1 = line.substring(0, line.length() / 2);
            String c2 = line.substring(line.length() / 2);

            for(char c: c1.toCharArray()) {
                for(char cc: c2.toCharArray()) {
                    if(!dups.contains(c))
                        if(c == cc) {
                            sum +=( (( c | ('a' ^ 'A') ) - 'a' + 1));
                            if(Character.isUpperCase(c)) sum += 26;
                            dups.add(c);
                        }
                }
            }
            line = r.readLine();
        }

        System.out.println(sum);
    }
}