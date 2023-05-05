public interface PersonalLoan {
    float find_SimpleInterest(float principal, int year);
}

public class Bank1 implements PersonalLoan {
    public static final float INTEREST_RATE = 0.10f;

    @Override
    public float find_SimpleInterest(float principal, int year) {
        float simpleInterest = principal * INTEREST_RATE * year;
        return simpleInterest;
    }
}

public class Bank2 implements PersonalLoan {
    public static final float INTEREST_RATE = 0.15f;

    @Override
    public float find_SimpleInterest(float principal, int year) {
        float simpleInterest = principal * INTEREST_RATE * year;
        return simpleInterest;
    }
}

public class Main {
    public static void main(String[] args) {
        PersonalLoan loan1 = new Bank1();
        PersonalLoan loan2 = new Bank2();

        float principal = 1000.0f;
        int year = 2;

        float interest1 = loan1.find_SimpleInterest(principal, year);
        float interest2 = loan2.find_SimpleInterest(principal, year);

        System.out.println("Bank1 Interest: " + interest1);
        System.out.println("Bank2 Interest: " + interest2);
    }
}