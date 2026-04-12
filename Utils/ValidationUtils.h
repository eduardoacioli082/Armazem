#pragma once
#include <QString>

class ValidationUtils {
public:
    static bool isLoginValido(const QString& login);
    static bool isSenhaForte(const QString& senha);
    static bool isPrecoValido(double preco);
    static bool isQuantidadeValida(int quantidade);
    static bool isCampoObrigatorioPreenchido(const QString& texto);
};
