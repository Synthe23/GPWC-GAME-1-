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
}
