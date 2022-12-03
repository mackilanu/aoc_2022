import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class Part2 {
    public static void main(String[] args) throws IOException {
        BufferedReader r = new BufferedReader(new FileReader("data.in"));
        int sum = 0;
        int test = 0;
        String line = r.readLine();
        while(line != null) {
                String l2 = r.readLine();
                String l3 = r.readLine();
            ArrayList<Character> dups = new ArrayList<>();
            for(char c: line.toCharArray()) {
                for(char cc: l2.toCharArray()) {
                    for(char ccc: l3.toCharArray()) {
                        if(!dups.contains(c))
                            if(c == cc) {
                                if(c == ccc) {
                                    test++;
                                    System.out.println(c + " " + test);
                                    sum +=( (( c | ('a' ^ 'A') ) - 'a' + 1));
                                    if(Character.isUpperCase(c)) sum += 26;
                                    dups.add(c);
                                }
                            }
                    }
                }
            }
            line = r.readLine();
            System.out.println(line);
        }

        System.out.println(sum);
    }
}
