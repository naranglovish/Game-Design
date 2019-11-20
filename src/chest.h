#include "main.h"
#include "physics.h"

#ifndef CHEST_H
#define CHEST_H


class Chest {
public:
    Chest() {}
    Chest(float x, float y, color_t color);
    glm::vec3 position;
    int broken;
    float rotation;
    sphereBounding shape;
    void draw(glm::mat4 VP);
private:
    VAO *object;
    VAO *object2;
    VAO *object3;
    VAO *diamondObject1;
    VAO *diamondObject2;
};

#endif // CHEST_H
