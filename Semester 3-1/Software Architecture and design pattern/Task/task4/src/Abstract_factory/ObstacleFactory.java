package Abstract_factory;

interface ObstacleFactory {
    AbstractAsteroid createAsteroid();
    AbstractDebrisField createDebrisField();
}