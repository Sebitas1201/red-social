//
// Created by lonix on 30/09/2025.
//

#ifndef TALLER_EJERCICIO3_COMENTARIO_H
#define TALLER_EJERCICIO3_COMENTARIO_H

#include <string>

class Usuario;

class Comentario {
private:
    std::string texto;
    Usuario* autor; //

public:
    Comentario(const std::string& texto, Usuario* autor);

    std::string getTexto() const;
    Usuario* getAutor() const;
};

#endif

