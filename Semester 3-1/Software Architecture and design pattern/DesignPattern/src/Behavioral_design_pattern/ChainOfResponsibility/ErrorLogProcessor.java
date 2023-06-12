package Behavioral_design_pattern.ChainOfResponsibility;

public class ErrorLogProcessor extends LogProcessor{
    public ErrorLogProcessor(LogProcessor nextLogProcessor) {
        super(nextLogProcessor);
    }
    @Override
    public void log(int logLevel, String msg) {
        if(logLevel==ERROR){
            System.out.println("ERROR : "+msg);
        }
        else{
            super.log(logLevel,msg);
        }
    }
}
