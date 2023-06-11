package Behavioral_design_pattern.Observer;

public class User1 implements Observer{
    @Override
    public void update(String str) {
        System.out.println("User 1 : "+str);
    }
}
