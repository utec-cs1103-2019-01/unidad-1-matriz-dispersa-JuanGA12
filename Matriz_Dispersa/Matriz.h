#ifndef MATRIZ_DISPERSA_MATRIZ_H
#define MATRIZ_DISPERSA_MATRIZ_H


class Matriz {

private:
    int** matriz;
    int filas;
    int columnas;

public:
    Matriz(); // Cambian los datos que eran basura a cero o NULL
    Matriz( int, int); // Crear la matriz
    virtual ~Matriz(); // Destructor

    void llenar();   // 1. Necesitamos llenar la matriz
    void imprimir(); // 2. Necesitamos imprimir la matriz
    void sumar(const Matriz&);
    void multiplicar(const Matriz&, const Matriz&);
    void escalar(const Matriz&, const Matriz&);
    void transposicion(const Matriz&);


};



#endif //MATRIZ_DISPERSA_MATRIZ_H
