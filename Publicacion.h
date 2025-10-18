//
// Created by lonix on 30/09/2025.
//

#ifndef TALLER_EJERCICIO3_PUBLICACION_H
#define TALLER_EJERCICIO3_PUBLICACION_H

#include <string>
#include <vector>
#include "Comentario.h"

class Publicacion {
private:
    std::string imagen;
    std::string descripcion;
    int likes;
    std::vector<Comentario> comentarios;

public:
    Publicacion(const std::string& imagen, const std::string& descripcion);
    void agregarComentario(const Comentario& comentario);

    void agregarLike();
    void mostrarInfo() const;
};

#endif // TALLER_EJERCICIO3_PUBLICACION_H
