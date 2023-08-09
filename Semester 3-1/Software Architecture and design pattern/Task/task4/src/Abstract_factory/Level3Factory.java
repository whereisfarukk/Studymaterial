package Abstract_factory;

class Level3Factory implements ObstacleFactory {
    public AbstractAsteroid createAsteroid() {
        return new DiamondAsteroid();
    }

    public AbstractDebrisField createDebrisField() {
        return new ExplosiveDebrisField();
    }
}