package Structural_design_pattern.Adapter;

public class XMLSoftware implements XMLData{
    @Override
    public void readXMLData() {
        System.out.println("Read only XML data");
    }
}
