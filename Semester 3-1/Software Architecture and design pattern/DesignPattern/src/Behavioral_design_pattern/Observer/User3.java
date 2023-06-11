package Behavioral_design_pattern.Observer;

public class User3 implements Observer{
    @Override
    public void update(String str) {
        System.out.println("User 3 : "+str);
    }
}
