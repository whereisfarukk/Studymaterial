package Abstract_factory;

class Level2Factory implements ObstacleFactory {
    public AbstractAsteroid createAsteroid() {
        return new SiliconAsteroid();
    }

    public AbstractDebrisField createDebrisField() {
        return new DynamicDebrisField();
    }
}