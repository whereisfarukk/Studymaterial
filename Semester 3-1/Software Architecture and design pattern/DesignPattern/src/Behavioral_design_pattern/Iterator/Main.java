package Behavioral_design_pattern.Iterator;

public class Main {
    public static void main(String[] args) {
        TV tv=new ConcreteTV();
        Iterator iterator =tv.getIterator();
        while(iterator.hasNext()){
            String channel=iterator.next();
            System.out.println("Tv channel name is "+channel);
        }
    }
}
