package Creational_design_pattern.Singleton;

public class Singleton {
    private Singleton(){

    }
    public static Singleton instance;
    public static Singleton getInstance(){
        if(instance==null){
            return instance=new Singleton();
        }
        return instance;
    }
}
