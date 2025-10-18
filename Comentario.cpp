//
// Created by lonix on 30/09/2025.
//

#include "Comentario.h"
#include "Usuario.h"

Comentario::Comentario(const std::string& texto, Usuario* autor)
    : texto(texto), autor(autor) {}

std::string Comentario::getTexto() const {
    return this->texto;
}

Usuario* Comentario::getAutor() const {
    return this->autor;
}

