package Abstract_factory;

class Level4Factory implements ObstacleFactory {
    public AbstractAsteroid createAsteroid() {
        return new GoldAsteroid();
    }

    public AbstractDebrisField createDebrisField() {
        return new MagneticDebrisField();
    }
}