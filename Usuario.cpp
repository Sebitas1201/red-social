//
// Created by lonix on 30/09/2025.
//
#include "Usuario.h"
#include "Comentario.h"
#include <iostream>

Usuario::Usuario(const std::string& nombreUsuario)
    : nombreUsuario(nombreUsuario) {}

std::string Usuario::getNombreUsuario() const {
    return this->nombreUsuario;
}

Publicacion& Usuario::crearPublicacion(const std::string& imagen, const std::string& descripcion) {
    this->publicaciones.push_back(Publicacion(imagen, descripcion));
    return this->publicaciones.back();
}

void Usuario::comentar(Publicacion& publicacion, const std::string& texto) {
    Comentario comentario(texto, this);
    publicacion.agregarComentario(comentario);
}

void Usuario::darLike(Publicacion& publicacion) {
    publicacion.agregarLike();
}

void Usuario::mostrarPublicaciones() const {
    std::cout << "===== Publicaciones de " << this->nombreUsuario << " =====" << std::endl;
    for (const auto& pub : this->publicaciones) {
        pub.mostrarInfo();
    }
}
