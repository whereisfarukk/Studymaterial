package Behavioral_design_pattern.Observer;

public class User2 implements Observer{
    @Override
    public void update(String str) {
        System.out.println("user 2 : "+str);
    }
}
