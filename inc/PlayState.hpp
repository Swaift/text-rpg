#ifndef PLAYSTATE_HPP
#define PLAYSTATE_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "State.hpp"
#include "Ball.hpp"
#include "Score.hpp"

class PlayState: public State {
    public:
        PlayState();
        void execute(sf::RenderWindow& window);
        void draw(sf::RenderWindow& window);
    private:
        sf::Vertex divider[2];
        sf::RectangleShape
            topWall,
            bottomWall,
            leftWall,
            rightWall,
            lPaddle,
            rPaddle;
        sf::Ball ball;
        sf::Font font;
        sf::Score lScore, rScore;
        int wait;
        sf::SoundBuffer hitWallBuffer, hitPaddleBuffer, pointBuffer;
        sf::Sound hitWallSound, hitPaddleSound, pointSound;

        void restrictPaddle(sf::Shape& paddle);
        float getBallOffset(sf::Shape& paddle);
};

#endif // PLAYSTATE_HPP
