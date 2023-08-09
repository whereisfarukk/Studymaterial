package Abstract_factory;

import java.util.Random;

public class Main {
    public static void main(String[] args) {
        Random random = new Random();

        // Randomly select a level
        int level = random.nextInt(5) + 1;

        // Randomly generate a score
        int score = random.nextInt(2001);

        // Instantiate the appropriate factory based on the level
        ObstacleFactory factory = switch (level) {
            case 1 -> new Level1Factory();
            case 2 -> new Level2Factory();
            case 3 -> new Level3Factory();
            case 4 -> new Level4Factory();
            case 5 -> new Level5Factory();
            default -> throw new IllegalArgumentException("Invalid level: " + level);
        };

        // Create an asteroid using the factory
        AbstractAsteroid asteroid = factory.createAsteroid();
        asteroid.show();

        // Create a debris field using the factory
        AbstractDebrisField debrisField = factory.createDebrisField();
        debrisField.show();
    }
}