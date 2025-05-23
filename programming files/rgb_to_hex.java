// 04/01/2025 Weds - Sean

public class rgb_to_hex {
    public static void main(String[] args) {
        // main file that sets r, g, and b values
        int r = 255;
        int g = 255;
        int b = 255;
        // creates a string named hexColor using the function rgbToHex
        String hexColor = rgbToHex(r, g, b);
        System.out.println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor);
    }

    public static String rgbToHex(int r, int g, int b) {
        // this function math.min and math.max
        r = Math.min(255, Math.max(0, r));
        g = Math.min(255, Math.max(0, g));
        b = Math.min(255, Math.max(0, b));
        return String.format("%02X%02X%02X", r, g, b);
    }
}

//Test with RGB color (254, 127, 0) = FF7F00


