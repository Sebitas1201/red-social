//
// Created by lonix on 30/09/2025.
//

#ifndef TALLER_EJERCICIO3_USUARIO_H
#define TALLER_EJERCICIO3_USUARIO_H

#include <string>
#include <vector>
#include "Publicacion.h"

class Usuario {
private:
    std::string nombreUsuario;
    std::vector<Publicacion> publicaciones;

public:
    Usuario(const std::string& nombreUsuario);

    std::string getNombreUsuario() const;

    Publicacion& crearPublicacion(const std::string& imagen, const std::string& descripcion);
    void comentar(Publicacion& publicacion, const std::string& texto);
    void darLike(Publicacion& publicacion);
    void mostrarPublicaciones() const;
};

#endif //TALLER_EJERCICIO3_USUARIO_H
