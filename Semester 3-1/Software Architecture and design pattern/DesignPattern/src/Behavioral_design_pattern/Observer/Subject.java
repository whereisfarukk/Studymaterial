package Behavioral_design_pattern.Observer;

public interface Subject {
    public void registerObserver(Observer o);
    public void unregisterObserver(Observer o);
    public void notifyObserver(String str);
}
