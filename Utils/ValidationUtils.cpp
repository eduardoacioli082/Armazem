#include "ValidationUtils.h"

bool ValidationUtils::isLoginValido(const QString& login) {
    // Login não pode ser vazio e deve ter pelo menos 4 caracteres
    return !login.trimmed().isEmpty() && login.trimmed().length() >= 4;
}

bool ValidationUtils::isSenhaForte(const QString& senha) {
    // Senha mínima de 6 caracteres
    return senha.length() >= 6;
}

bool ValidationUtils::isPrecoValido(double preco) {
    // Preço não pode ser negativo
    return preco >= 0.0;
}

bool ValidationUtils::isQuantidadeValida(int quantidade) {
    // Quantidade não pode ser negativa
    return quantidade >= 0;
}

bool ValidationUtils::isCampoObrigatorioPreenchido(const QString& texto) {
    return !texto.trimmed().isEmpty();
}
