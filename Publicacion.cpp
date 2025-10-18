//
// Created by lonix on 30/09/2025.
//

#include "Publicacion.h"
#include "Usuario.h"
#include <iostream>

Publicacion::Publicacion(const std::string& imagen, const std::string& descripcion)
    : imagen(imagen), descripcion(descripcion), likes(0) {}

void Publicacion::agregarComentario(const Comentario& comentario) {
    this->comentarios.push_back(comentario);
}

void Publicacion::agregarLike() {
    this->likes++;
}

void Publicacion::mostrarInfo() const {
    std::cout << "Imagen: " << this->imagen << std::endl;
    std::cout << "Descripción: " << this->descripcion << std::endl;
    std::cout << "Likes: " << this->likes << std::endl;
    std::cout << "Comentarios: " << std::endl;

    for (const auto& c : this->comentarios) {
        std::cout << "   - " << c.getTexto()
                  << " (por " << c.getAutor()->getNombreUsuario() << ")"
                  << std::endl;
    }

}
