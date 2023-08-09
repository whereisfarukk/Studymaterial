package Factory;

import java.util.Random;

interface AsteroidsFactory {
    Asteroids createAsteroids(int score);
}

// Concrete Factory for Level 1
class Level1AsteroidsFactory implements AsteroidsFactory {
    public Asteroids createAsteroids(int score) {
        if (score > 500) {
            return new IceAsteroids();
        } else {
            return new IronAsteroids();
        }
    }
}

// Concrete Factory for Level 2
class Level2AsteroidsFactory implements AsteroidsFactory {
    public Asteroids createAsteroids(int score) {
        if (score > 1000) {
            return new RockyAsteroids();
        } else {
            return new SiliconAsteroids();
        }
    }
}

// New Concrete Factory for Level 3
class Level3AsteroidsFactory implements AsteroidsFactory {
    public Asteroids createAsteroids(int score) {
        if (score > 2000) {
            return new FireAsteroids();
        } else {
            return new DiamondAsteroids();
        }
    }
}

// New Concrete Factory for Level 4
class Level4AsteroidsFactory implements AsteroidsFactory {
    public Asteroids createAsteroids(int score) {
        if (score > 3000) {
            return new MagneticAsteroids();
        } else {
            return new FireAsteroids();
        }
    }
}

// Product Interface
interface Asteroids {
    void show();
}

// Concrete Product: Ice Asteroids
class IceAsteroids implements Asteroids {
    public void show() {
        System.out.println("Ice Asteroids popped up");
    }
}

// Concrete Product: Iron Asteroids
class IronAsteroids implements Asteroids {
    public void show() {
        System.out.println("Iron Asteroids popped up");
    }
}

// Concrete Product: Rocky Asteroids
class RockyAsteroids implements Asteroids {
    public void show() {
        System.out.println("Rocky Asteroids popped up");
    }
}

// Concrete Product: Silicon Asteroids
class SiliconAsteroids implements Asteroids {
    public void show() {
        System.out.println("Silicon Asteroids popped up");
    }
}

// New Concrete Product: Fire Asteroids
class FireAsteroids implements Asteroids {
    public void show() {
        System.out.println("Fire Asteroids popped up");
    }
}

// New Concrete Product: Diamond Asteroids
class DiamondAsteroids implements Asteroids {
    public void show() {
        System.out.println("Diamond Asteroids popped up");
    }
}

// New Concrete Product: Magnetic Asteroids
class MagneticAsteroids implements Asteroids {
    public void show() {
        System.out.println("Magnetic Asteroids popped up");
    }
}

class Main1 {
    public static void main(String[] args) {
        Random random = new Random();

        int level = random.nextInt(4) + 1;
        int score = random.nextInt(4001);

        AsteroidsFactory asteroidsFactory = switch (level) {
            case 1 -> new Level1AsteroidsFactory();
            case 2 -> new Level2AsteroidsFactory();
            case 3 -> new Level3AsteroidsFactory();
            default -> new Level4AsteroidsFactory();
        };

        Asteroids asteroids = asteroidsFactory.createAsteroids(score);
        asteroids.show();
    }
}