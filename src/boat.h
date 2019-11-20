#include "main.h"
#include "physics.h"

#ifndef BOAT_H
#define BOAT_H


class Boat {
public:
    Boat() {}
    Boat(float x, float y, color_t color, color_t baseColor, color_t arrowColor);
    glm::vec3 position;
    GLuint Texture;
    float rotation;
    float velocity, upVelocity;
    float windAngle;
    float mastScale, oldMastScale, mastRatio;
    float oldWindAngle, windRatio;
    float cannonRotation;
    float handAngle, handAngularVelocity;
    void draw(glm::mat4 VP);
    void texturedDraw(glm::mat4 VP);
    void set_position(float x, float y);
    void tick();
    void islandTick(sphereBounding shape, int chestBroken);
    void islandDraw(glm::mat4 VP);
    double speed;
    boatBounding shape;
    sphereBounding sphereShape;
    sphereBounding humanShape;
private:
    VAO *object;
    VAO *mastObject;
    VAO *sailObject;
    VAO *baseObject;
    VAO *arrowObject;
    VAO *cannonObject;

    VAO *faceObject;
    VAO *shirtObject;
    VAO *handObject;
    VAO *footObject;
};

#endif // BOAT_H
