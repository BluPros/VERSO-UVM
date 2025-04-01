

import java.io.*;

public class even_odd_site {
    public static void main(String[] args) throws IOException {
        BufferedWriter file = new BufferedWriter(new FileWriter("numbers.html"));
        file.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n");
        file.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n");
        
        // determine even or odd int using modulus 
        for (int i = 1; i <= 50; i++) {
            if (i % 2 == 0) {
                // the number is even, add to the even part of the table
                file.write("<tr><td></td><td>" + i + "</td></tr>\n");                
            }
            else {
                // the number is odd, add to the odd part of the table
                file.write("<tr><td>" + i + "</td><td></td></tr>\n");
            }
        }

        file.write("</table>\n</body>\n</html>");
        file.close();
        BufferedReader reader = new BufferedReader(new FileReader("numbers.html"));
        String line;

        // write lines to numbers.html
        while ((line = reader.readLine()) == null) {
            System.out.println(line);
        }
        reader.close();
    }
}