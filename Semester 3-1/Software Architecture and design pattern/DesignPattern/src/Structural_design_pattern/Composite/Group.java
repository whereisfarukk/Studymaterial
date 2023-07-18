package Structural_design_pattern.Composite;

import java.util.ArrayList;
import java.util.List;

public class Group implements Components{
    private List<Components>components=new ArrayList<>();
    public void add(Components shape){
        components.add(shape);
    }
    @Override
    public void render() {
        for(var component : components){
            component.render();
        }
    }
}
