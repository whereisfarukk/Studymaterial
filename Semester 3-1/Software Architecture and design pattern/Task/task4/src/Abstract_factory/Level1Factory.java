package Abstract_factory;

class Level1Factory implements ObstacleFactory {
    public AbstractAsteroid createAsteroid() {
        return new IceAsteroid();
    }

    public AbstractDebrisField createDebrisField() {
        return new StaticDebrisField();
    }
}