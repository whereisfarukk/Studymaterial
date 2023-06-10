package Behavioral_design_pattern.Command;

public class User {
    public static void main(String[] args) {
        TubeLight tubeLight=new TubeLight();
        TubeLightOnCommand tubeLightOnCommand=new TubeLightOnCommand(tubeLight);
        RemoteController remoteController=new RemoteController(tubeLightOnCommand);
        remoteController.pressButton();

        TubeLightOffCommand tubeLightOffCommand=new TubeLightOffCommand(tubeLight);
        remoteController.setCommand(tubeLightOffCommand);
        remoteController.pressButton();
    }
}
