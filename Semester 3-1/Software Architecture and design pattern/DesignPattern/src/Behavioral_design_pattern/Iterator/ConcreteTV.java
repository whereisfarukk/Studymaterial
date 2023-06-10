package Behavioral_design_pattern.Iterator;

public class ConcreteTV implements TV{
    private String[] channels={"LG","Sony","Samsung"};
    private Iterator iterator;
    public ConcreteTV(){
        iterator=new ConcreteInterator();
    }
    @Override
    public Iterator getIterator() {
        return iterator;
    }
    public class ConcreteInterator implements Iterator{
        int index=0;
        @Override
        public boolean hasNext() {
            if(index<channels.length)
                return  true;
            return false;
        }

        @Override
        public String next() {
            if(hasNext()){
                return channels[index++];
            }
            return null;
        }
    }
}
