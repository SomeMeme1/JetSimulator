#include <vector>

struct Vertex{
    float x, y, z;
    float nx, ny, nz;
    float u, v;

};

struct Triangle {
    int v1, v2, v3;

};

class Mesh{
    public:
    std::vector<Vertex> vertices;
    std::vector<Triangle> triangles;
};

class Vector3 {
    public:
    float x, y, z;
    Vector3(float x1, float y1, float z1): x(x1), y(y1), z(z1){

    }
    
    Vector3 Cross(const Vector3& other) const {
        return Vector3(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
    } 
    float Dot_Product(const Vector3 & other)const {
        return x* other.x + y* other.y + z* other.z;
    }


 };