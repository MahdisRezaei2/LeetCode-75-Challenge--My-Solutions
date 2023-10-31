public class Main {
    public static void main(String[] args) {
        // Create an instance of the Solution class
        Solution solution = new Solution();

        // Input strings
        String str1 = "ABCABC";
        String str2 = "ABC";

        // Call the gcdOfStrings method
        String gcd = solution.gcdOfStrings(str1, str2);

        // Display the result
        System.out.println("GCD of " + str1 + " and " + str2 + " is: " + gcd);
    }
}
