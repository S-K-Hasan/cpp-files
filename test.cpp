#include <iostream>
#include <string>
using namespace std;

class TextureLoader {
public:

    void loadTexture( string filePath) {
        cout << "Loading texture from file: " << filePath << endl;

    }


    void loadTexture( char memory, int size) {
        cout << "Loading texture from memory buffer of size: " << size << " bytes" << endl;

    }

    // Load texture from a network stream (using a URL)
    void loadTextureFromNetwork(string url) {
        cout << "Loading texture from network stream: " << url << endl;
        // Simulate network loading
    }
};

int main() {
    TextureLoader loader;

    // Load texture from a file
    loader.loadTexture("assets/texture.png");

    loader.loadTexture('a', 8);

    // Load texture from a network stream
    loader.loadTextureFromNetwork("http://example.com/textures/texture.png");

    return 0;
}
