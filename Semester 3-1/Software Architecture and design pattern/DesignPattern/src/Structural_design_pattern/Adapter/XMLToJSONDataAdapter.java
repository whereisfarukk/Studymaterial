package Structural_design_pattern.Adapter;

public class XMLToJSONDataAdapter implements JSONData{
    XMLData xmlData;
    XMLToJSONDataAdapter(XMLData xmldata){
        this.xmlData=xmldata;
    }

    @Override
    public void readJSONData() {
        xmlData.readXMLData();
        System.out.println("convert here xml data to json data");
    }
}
