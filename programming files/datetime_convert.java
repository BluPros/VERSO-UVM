// 04/01/2025 Weds - Nina
// 04/01/2025 Liz broke it
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class datetime_convert {
    public static void main(String[] args) {
        String date = "2022-03-17 10:45:30";
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("MM-dd-yyy HH:mm:ss");        // error "yyyy-MM-dd HH:mm:ss"
        LocalDateTime date = LocalDateTime.parse(dateStr, formatter);
        String formattedDate = date.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));

        System.out.println(formattedDate);
    }

