#include "main.h"
#include "physics.h"

#ifndef MONSTER_H
#define MONSTER_H


class Monster {
public:
    Monster() {}
    Monster(float x, float y, color_t color, bool isBoss = false);
    glm::vec3 position;
    int isBoss;
    float rotation;
    sphereBounding shape;
    void draw(glm::mat4 VP);
private:
    VAO *object;
    VAO *thornObject;
    VAO *legObject;
    VAO *eyeObject;
    VAO *mouthObject;
};

#endif // MONSTER_H
