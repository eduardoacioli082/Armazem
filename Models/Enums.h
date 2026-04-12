#pragma once
#include <QString>

enum class TipoUsuario {
    Admin,
    Gerente,
    Funcionario,
    Invalido
};

enum class TipoMovimentacao {
    Entrada,
    Saida,
    Ajuste,
    Invalido
};

class EnumConverter {
public:
    static QString tipoUsuarioToString(TipoUsuario tipo);
    static TipoUsuario stringToTipoUsuario(const QString& str);

    static QString tipoMovimentacaoToString(TipoMovimentacao tipo);
    static TipoMovimentacao stringToTipoMovimentacao(const QString& str);
};