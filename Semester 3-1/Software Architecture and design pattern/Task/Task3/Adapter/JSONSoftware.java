package Structural_design_pattern.Adapter;

public class JSONSoftware implements JSONData{
    @Override
    public void readJSONData() {
        System.out.println("Only read JSON Data");
    }
}
