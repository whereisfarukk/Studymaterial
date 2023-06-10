package Behavioral_design_pattern.Command;

public class RemoteController {
    Command command;

    public RemoteController(Command command) {
        this.command = command;
    }
    public void setCommand(Command command){
        this.command=command;
    }
    void pressButton(){
        command.execute();
    }
}
