package Behavioral_design_pattern.Observer;

import java.util.ArrayList;

public class YouTubeChannel1 implements Subject{
    ArrayList<Observer>observerList;

    public YouTubeChannel1() {
        observerList = new ArrayList<Observer>();
    }

    @Override
    public void registerObserver(Observer o) {
        observerList.add(o);
    }

    @Override
    public void unregisterObserver(Observer o) {
        int index=observerList.indexOf(o);
        if(index>=0){
            observerList.remove(o);
        }
    }

    @Override
    public void notifyObserver(String str) {
        for(Observer o : observerList) {
            o.update(str);
        }
    }
    public void someThingNewAdded(String str){
        notifyObserver(str);
    }
}
