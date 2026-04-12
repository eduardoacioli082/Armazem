#pragma once
#include <QString>
#include <QDateTime>
#include "Enums.h"

class Usuario {
private:
    int id;
    QString nome;
    QString login;
    QString senhaHash;
    TipoUsuario tipo;
    bool ativo;
    QDateTime dataCriacao;

public:
    Usuario() : id(0), ativo(true), tipo(TipoUsuario::Invalido) {}
    
    // Getters
    int getId() const { return id; }
    QString getNome() const { return nome; }
    QString getLogin() const { return login; }
    QString getSenhaHash() const { return senhaHash; }
    TipoUsuario getTipo() const { return tipo; }
    bool isAtivo() const { return ativo; }
    QDateTime getDataCriacao() const { return dataCriacao; }

    // Setters
    void setId(int newId) { id = newId; }
    void setNome(const QString& newNome) { nome = newNome; }
    void setLogin(const QString& newLogin) { login = newLogin; }
    void setSenhaHash(const QString& newHash) { senhaHash = newHash; }
    void setTipo(TipoUsuario newTipo) { tipo = newTipo; }
    void setAtivo(bool newAtivo) { ativo = newAtivo; }
    void setDataCriacao(const QDateTime& newData) { dataCriacao = newData; }
};
