package Creational_design_pattern.Factory;

public class MobileFactory {
    public Mobile createMobile(String companyName){
        if("Iphone".equals(companyName)){
            return new Iphone();
        }
        else if("Samsung".equals(companyName)){
            return new Samsung();
        }
        else if("Xiaomi".equals(companyName)){
            return new Xiaomi();
        }
        else{
            return null;
        }
    }
}
