package Structural_design_pattern.Decorator;

public class Main {
    public static void main(String[] args) {
        storeCreditCard(new EncryptedCloudStream(new CompressedCloudStream(new CloudStream())));
    }

    public static void storeCreditCard(Stream stream){
        stream.write("123-123-345");
    }
}
