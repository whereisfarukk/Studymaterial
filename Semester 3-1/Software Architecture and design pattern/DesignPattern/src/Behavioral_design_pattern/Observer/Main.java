package Behavioral_design_pattern.Observer;

public class Main {
    public static void main(String[] args) {
        User1 user1=new User1();
        User2 user2=new User2();
        User3 user3=new User3();
        YouTubeChannel1 youTubeChannel1=new YouTubeChannel1();
        YouTubeChannel2 youTubeChannel2=new YouTubeChannel2();

        youTubeChannel1.registerObserver(user1);
        youTubeChannel1.registerObserver(user2);
        youTubeChannel1.registerObserver(user3);
        youTubeChannel2.registerObserver(user1);
        youTubeChannel2.registerObserver(user2);

        youTubeChannel1.someThingNewAdded("pirates of the caribbean added");
        youTubeChannel2.someThingNewAdded("Harry potter added");
    }
}
