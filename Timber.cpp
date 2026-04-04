#include <SFML/Graphics.hpp>
#include <sstream>
#include <SFML/Audio.hpp>

using namespace sf;

void updateBranches(int seed);

const int NUM_BRANCHES = 6;
enum class side
{
    LEFT,
    RIGHT,
    NONE
};
side branchPositions[NUM_BRANCHES];
Sprite Branches[NUM_BRANCHES];

int main(){
    // Create Video Mode Object
    // VideoMode vm(1920,1080);
    VideoMode vm = VideoMode::getDesktopMode();
    // Rendering window
    RenderWindow window(vm, "Timber!!!");
    View view(FloatRect(0, 0, 1920, 1080));
    window.setView(view);
    Texture backgroundTexture;
    backgroundTexture.loadFromFile("graphics/background.png");

    Sprite backgroundSprite;
    backgroundSprite.setTexture(backgroundTexture);
    backgroundSprite.setPosition(0, 0);

    Texture treeTexture;
    treeTexture.loadFromFile("graphics/tree.png");

    Sprite treeSprite;
    treeSprite.setTexture(treeTexture);
    treeSprite.setPosition(810, 0);

    Texture beeTexture;
    beeTexture.loadFromFile("graphics/bee.png");

    Sprite beeSprite;
    beeSprite.setTexture(beeTexture);
    beeSprite.setPosition(2000, 800);

    bool beeActive = false;
    float beeSpeed = 0.0f;
    float beeHeight = 0.0f;

    Texture cloudTexture;
    cloudTexture.loadFromFile("graphics/cloud.png");

    Sprite cloudSprite1;
    cloudSprite1.setTexture(cloudTexture);
    cloudSprite1.setPosition(0, 0);

    bool cloudSpriteActive1 = false;
    float cloudSpriteSpeed1 = 0.0f;
    float cloudSpriteHeight1 = 0.0f;

    Sprite cloudSprite2;
    cloudSprite2.setTexture(cloudTexture);
    cloudSprite2.setPosition(0, 150);
}
