# SFML Demo Games

## Pong
- [x] Refactor to use namespaces for each state
- [x] Line dividing player areas
- [x] Convert #define directives to constant variables
- [x] Move play state initalization/processing to states.cpp
- [x] Generalize Makefile
- [x] Restart game after each point
- [x] Wrap state machine in class
- [x] Wrap ball/score in class
- [x] Display score on play screen
- [x] Pause for 2 seconds after each point
- [ ] Game over screen with win/loss (first to 5 points wins)
- [ ] Splash screen
- [ ] Sound effects on game start, ball bounce, point, and win/loss
- [ ] Implement edge-based collision detection
- [ ] Stop right paddle from leaving play area
- [ ] ~~Fix bug with ball not bouncing off left end of top wall~~ (likely due to lack of edge-based collision) 
- [ ] ~~Make ball and AI paddle get faster over time~~ (not worth it)
