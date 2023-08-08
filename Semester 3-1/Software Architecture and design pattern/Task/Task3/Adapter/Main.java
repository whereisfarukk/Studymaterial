package Structural_design_pattern.Adapter;

public class Main {
    public static void main(String[] args) {
        XMLSoftware xmlData=new XMLSoftware();
        JSONData xmlAdapter=new XMLToJSONDataAdapter(xmlData);
        xmlAdapter.readJSONData();
    }
}
