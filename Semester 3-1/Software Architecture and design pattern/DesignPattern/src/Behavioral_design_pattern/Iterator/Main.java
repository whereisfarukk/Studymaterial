package Behavioral_design_pattern.Iterator;

public class Main {
    public static void main(String[] args) {
        BrowseHistory history=new BrowseHistory();
        history.push("facebook.com");
        history.push("codeforce.com");
        history.push("gmail.com");
        Iterator iterator=history.createIterator();
        while (iterator.hasNext()){
            String url= iterator.current();
            System.out.println(url);
            iterator.next();
        }
    }
}
