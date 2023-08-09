package Abstract_factory;

class Level5Factory implements ObstacleFactory {
    public AbstractAsteroid createAsteroid() {
        return new CrystalAsteroid();
    }

    public AbstractDebrisField createDebrisField() {
        return new ToxicDebrisField();
    }
}