#ifndef ShaderProgram_H
#define ShaderProgram_H

#include <GL/glew.h>
#include <vector>

using namespace std;

class ShaderProgram
{
    vector<GLuint> shaders;
    public:
        ShaderProgram();
        void attachShader(GLenum shaderType, GLchar* shaderSrc);
        void compile();
};

#endif
