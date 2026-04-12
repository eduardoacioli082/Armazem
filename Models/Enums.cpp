#include "Enums.h"

QString EnumConverter::tipoUsuarioToString(TipoUsuario tipo) {
    switch (tipo) {
        case TipoUsuario::Admin: return "admin";
        case TipoUsuario::Gerente: return "gerente";
        case TipoUsuario::Funcionario: return "funcionario";
        default: return "invalido";
    }
}

TipoUsuario EnumConverter::stringToTipoUsuario(const QString& str) {
    QString s = str.toLower();
    if (s == "admin") return TipoUsuario::Admin;
    if (s == "gerente") return TipoUsuario::Gerente;
    if (s == "funcionario") return TipoUsuario::Funcionario;
    return TipoUsuario::Invalido;
}

QString EnumConverter::tipoMovimentacaoToString(TipoMovimentacao tipo) {
    switch (tipo) {
        case TipoMovimentacao::Entrada: return "entrada";
        case TipoMovimentacao::Saida: return "saida";
        case TipoMovimentacao::Ajuste: return "ajuste";
        default: return "invalido";
    }
}

TipoMovimentacao EnumConverter::stringToTipoMovimentacao(const QString& str) {
    QString s = str.toLower();
    if (s == "entrada") return TipoMovimentacao::Entrada;
    if (s == "saida") return TipoMovimentacao::Saida;
    if (s == "ajuste") return TipoMovimentacao::Ajuste;
    return TipoMovimentacao::Invalido;
}