public class two {
    public static void main(String[] args) {
        String s1 = "KIIT University";
        String[] tokens = s1.split(" ");

        System.out.println("Tokens:");
        for (String token : tokens) {
            System.out.println(token);
        }

        String s2 = tokens[0];
        String s3 = tokens[1];

        System.out.println("String 1: " + s2);
        System.out.println("String 2: " + s3);
    }
}